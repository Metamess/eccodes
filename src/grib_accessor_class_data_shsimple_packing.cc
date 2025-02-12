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
   IMPLEMENTS = init
   IMPLEMENTS = pack_double
   IMPLEMENTS = dump;get_native_type
   MEMBERS=const char*  coded_values
   MEMBERS=const char*  real_part
   MEMBERS=int dirty
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
static void dump(grib_accessor*, grib_dumper*);
static void init(grib_accessor*, const long, grib_arguments*);
//static void init_class(grib_accessor_class*);

typedef struct grib_accessor_data_shsimple_packing
{
    grib_accessor att;
    /* Members defined in gen */
    /* Members defined in data_shsimple_packing */
    const char*  coded_values;
    const char*  real_part;
    int dirty;
} grib_accessor_data_shsimple_packing;

extern grib_accessor_class* grib_accessor_class_gen;

static grib_accessor_class _grib_accessor_class_data_shsimple_packing = {
    &grib_accessor_class_gen,                      /* super */
    "data_shsimple_packing",                      /* name */
    sizeof(grib_accessor_data_shsimple_packing),  /* size */
    0,                           /* inited */
    0,                           /* init_class */
    &init,                       /* init */
    0,                  /* post_init */
    0,                    /* destroy */
    &dump,                       /* dump */
    0,                /* next_offset */
    0,              /* get length of string */
    0,                /* get number of values */
    0,                 /* get number of bytes */
    0,                /* get offset to bytes */
    &get_native_type,            /* get native type */
    0,                /* get sub_section */
    0,               /* pack_missing */
    0,                 /* is_missing */
    0,                  /* pack_long */
    0,                /* unpack_long */
    &pack_double,                /* pack_double */
    0,                 /* pack_float */
    0,              /* unpack_double */
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
    0,                    /* compare vs. another accessor */
    0,      /* unpack only ith value (double) */
    0,       /* unpack only ith value (float) */
    0,  /* unpack a given set of elements (double) */
    0,   /* unpack a given set of elements (float) */
    0,     /* unpack a subarray */
    0,                      /* clear */
    0,                 /* clone accessor */
};


grib_accessor_class* grib_accessor_class_data_shsimple_packing = &_grib_accessor_class_data_shsimple_packing;


//static void init_class(grib_accessor_class* c)
//{
// INIT
//}

/* END_CLASS_IMP */

static void init(grib_accessor* a, const long v, grib_arguments* args)
{
    grib_accessor_data_shsimple_packing* self = (grib_accessor_data_shsimple_packing*)a;

    self->coded_values = grib_arguments_get_name(grib_handle_of_accessor(a), args, 0);
    self->real_part    = grib_arguments_get_name(grib_handle_of_accessor(a), args, 1);
    a->flags |= GRIB_ACCESSOR_FLAG_DATA;

    a->length = 0;
}

static void dump(grib_accessor* a, grib_dumper* dumper)
{
    grib_dump_values(dumper, a);
}

static int pack_double(grib_accessor* a, const double* val, size_t* len)
{
    grib_accessor_data_shsimple_packing* self = (grib_accessor_data_shsimple_packing*)a;
    int err                                   = GRIB_SUCCESS;

    size_t coded_n_vals = *len - 1;
    size_t n_vals       = *len;

    self->dirty = 1;

    if (*len == 0)
        return GRIB_NO_VALUES;

    if ((err = grib_set_double_internal(grib_handle_of_accessor(a), self->real_part, *val)) != GRIB_SUCCESS)
        return err;

    val++;

    if ((err = grib_set_double_array_internal(grib_handle_of_accessor(a), self->coded_values, val, coded_n_vals)) != GRIB_SUCCESS)
        return err;

    *len = n_vals;

    return err;
}

static int get_native_type(grib_accessor* a)
{
    return GRIB_TYPE_DOUBLE;
}
