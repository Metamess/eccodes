/*
 * (C) Copyright 2005- ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 *
 * In applying this licence, ECMWF does not waive the privileges and immunities granted to it by
 * virtue of its status as an intergovernmental organisation nor does it submit to any jurisdiction.
 */

#include "grib_api_internal.h"

/*
   This is used by make_class.pl

   START_CLASS_DEF
   CLASS      = accessor
   SUPER      = grib_accessor_class_gen
   IMPLEMENTS = unpack_double;pack_double
   IMPLEMENTS = unpack_long;pack_long;destroy
   IMPLEMENTS = init;dump;value_count
   IMPLEMENTS = compare;get_native_type
   MEMBERS=grib_darray* arr
   MEMBERS=int type;
   END_CLASS_DEF

 */

/* START_CLASS_IMP */

/*

Don't edit anything between START_CLASS_IMP and END_CLASS_IMP
Instead edit values between START_CLASS_DEF and END_CLASS_DEF
or edit "accessor.class" and rerun ./make_class.pl

*/

static int get_native_type(grib_accessor*);
static int pack_double(grib_accessor*, const double* val, size_t* len);
static int pack_long(grib_accessor*, const long* val, size_t* len);
static int unpack_double(grib_accessor*, double* val, size_t* len);
static int unpack_long(grib_accessor*, long* val, size_t* len);
static int value_count(grib_accessor*, long*);
static void destroy(grib_context*, grib_accessor*);
static void dump(grib_accessor*, grib_dumper*);
static void init(grib_accessor*, const long, grib_arguments*);
//static void init_class(grib_accessor_class*);
static int compare(grib_accessor*, grib_accessor*);

typedef struct grib_accessor_transient_darray
{
    grib_accessor att;
    /* Members defined in gen */
    /* Members defined in transient_darray */
    grib_darray* arr;
    int type;
} grib_accessor_transient_darray;

extern grib_accessor_class* grib_accessor_class_gen;

static grib_accessor_class _grib_accessor_class_transient_darray = {
    &grib_accessor_class_gen,                      /* super */
    "transient_darray",                      /* name */
    sizeof(grib_accessor_transient_darray),  /* size */
    0,                           /* inited */
    0,                           /* init_class */
    &init,                       /* init */
    0,                  /* post_init */
    &destroy,                    /* destroy */
    &dump,                       /* dump */
    0,                /* next_offset */
    0,              /* get length of string */
    &value_count,                /* get number of values */
    0,                 /* get number of bytes */
    0,                /* get offset to bytes */
    &get_native_type,            /* get native type */
    0,                /* get sub_section */
    0,               /* pack_missing */
    0,                 /* is_missing */
    &pack_long,                  /* pack_long */
    &unpack_long,                /* unpack_long */
    &pack_double,                /* pack_double */
    0,                 /* pack_float */
    &unpack_double,              /* unpack_double */
    0,               /* unpack_float */
    0,                /* pack_string */
    0,              /* unpack_string */
    0,          /* pack_string_array */
    0,        /* unpack_string_array */
    0,                 /* pack_bytes */
    0,               /* unpack_bytes */
    0,            /* pack_expression */
    0,              /* notify_change */
    0,                /* update_size */
    0,             /* preferred_size */
    0,                     /* resize */
    0,      /* nearest_smaller_value */
    0,                       /* next accessor */
    &compare,                    /* compare vs. another accessor */
    0,      /* unpack only ith value (double) */
    0,       /* unpack only ith value (float) */
    0,  /* unpack a given set of elements (double) */
    0,   /* unpack a given set of elements (float) */
    0,     /* unpack a subarray */
    0,                      /* clear */
    0,                 /* clone accessor */
};


grib_accessor_class* grib_accessor_class_transient_darray = &_grib_accessor_class_transient_darray;


//static void init_class(grib_accessor_class* c)
//{
// INIT
//}

/* END_CLASS_IMP */

static void init(grib_accessor* a, const long length, grib_arguments* args)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    self->arr                            = NULL;
    self->type                           = GRIB_TYPE_DOUBLE;
    a->length                            = 0;
}


static void dump(grib_accessor* a, grib_dumper* dumper)
{
    /* grib_accessor_transient_darray *self = (grib_accessor_transient_darray*)a; */
    grib_dump_double(dumper, a, NULL);
}

static int pack_double(grib_accessor* a, const double* val, size_t* len)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    size_t i;

    if (self->arr)
        grib_darray_delete(a->context, self->arr);
    self->arr = grib_darray_new(a->context, *len, 10);

    for (i = 0; i < *len; i++)
        grib_darray_push(a->context, self->arr, val[i]);

    return GRIB_SUCCESS;
}

static int pack_long(grib_accessor* a, const long* val, size_t* len)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    size_t i;

    if (self->arr)
        grib_darray_delete(a->context, self->arr);
    self->arr = grib_darray_new(a->context, *len, 10);

    for (i = 0; i < *len; i++)
        grib_darray_push(a->context, self->arr, (double)val[i]);

    return GRIB_SUCCESS;
}

static int unpack_double(grib_accessor* a, double* val, size_t* len)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    long count                           = 0;
    size_t i;

    value_count(a, &count);

    if (*len < count) {
        grib_context_log(a->context, GRIB_LOG_ERROR, "Wrong size for %s (setting %ld, required %ld) ", a->name, *len, count);
        return GRIB_ARRAY_TOO_SMALL;
    }

    *len = count;
    for (i = 0; i < *len; i++)
        val[i] = self->arr->v[i];


    return GRIB_SUCCESS;
}
static int unpack_long(grib_accessor* a, long* val, size_t* len)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    long count                           = 0;
    size_t i;

    value_count(a, &count);

    if (*len < count) {
        grib_context_log(a->context, GRIB_LOG_ERROR, "Wrong size for %s (setting %ld, required %ld) ", a->name, *len, count);
        return GRIB_ARRAY_TOO_SMALL;
    }

    *len = count;
    for (i = 0; i < *len; i++)
        val[i] = (long)self->arr->v[i];


    return GRIB_SUCCESS;
}


static void destroy(grib_context* c, grib_accessor* a)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    if (self->arr)
        grib_darray_delete(a->context, self->arr);
}

static int value_count(grib_accessor* a, long* count)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    if (self->arr)
        *count = grib_darray_used_size(self->arr);
    else
        *count = 0;

    return 0;
}

static int compare(grib_accessor* a, grib_accessor* b)
{
    int retval   = 0;
    double* aval = 0;
    double* bval = 0;

    size_t alen = 0;
    size_t blen = 0;
    int err     = 0;
    long count  = 0;

    err = grib_value_count(a, &count);
    if (err)
        return err;
    alen = count;

    err = grib_value_count(b, &count);
    if (err)
        return err;
    blen = count;

    if (alen != blen)
        return GRIB_COUNT_MISMATCH;

    aval = (double*)grib_context_malloc(a->context, alen * sizeof(double));
    bval = (double*)grib_context_malloc(b->context, blen * sizeof(double));

    grib_unpack_double(a, aval, &alen);
    grib_unpack_double(b, bval, &blen);

    retval = GRIB_SUCCESS;
    while (alen != 0) {
        if (*bval != *aval)
            retval = GRIB_DOUBLE_VALUE_MISMATCH;
        alen--;
    }

    grib_context_free(a->context, aval);
    grib_context_free(b->context, bval);

    return retval;
}

static int get_native_type(grib_accessor* a)
{
    grib_accessor_transient_darray* self = (grib_accessor_transient_darray*)a;
    return self->type;
}
