/*
 * Copyright 2005-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 *
 * In applying this licence, ECMWF does not waive the privileges and immunities granted to it by
 * virtue of its status as an intergovernmental organisation nor does it submit to any jurisdiction.
 */

/*todo limits for all radiative fluxes*/

parameter parameters[] = {
   {
      "10_meter_u_velocity_sfc.glob",
      -100,
      -1,
      1,
      100,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 165},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

   {
      "10_meter_u_velocity_sfc.lam",
      -100,
      -1,
      1,
      100,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 165},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

/* 
   MOGREPS (origin = 1(mogreps-mo-eua))
   2014-01-10: minimum limit for 10_meter_u_velocity_sfc changed to <-100,5> because of 2014010715_00+0000
   2014-31-03: maximum changed from <1,100> because of forecasts from 27-31.3...
   2014-31-03: minimum & maximum changed for u,v components changed to reflect better small UK domain..
*/
   {
      "10_meter_u_velocity_sfc.lam.mogreps-mo-eua",
      -100,
      10,
      -10,
      100,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},
         {"suiteName", GRIB_TYPE_STRING, 1, "mogreps-mo-eua"},

         {"paramId", GRIB_TYPE_LONG, 165},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

   {
      "10_meter_v_velocity_sfc.glob",
      -100,
      -1,
      1,
      100,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 166},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 3},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

   {
      "10_meter_v_velocity_sfc.lam",
      -100,
      -1,
      1,
      100,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 166},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 3},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

/* 
   MOGREPS (origin = 1(mogreps-mo-eua))  set up for 10_meter_u_velocity_sfc
   2014-01-08: minimum limit for 10_meter_v_velocity_sfc changed to <-100,10> because of one early January forecast..
   2014-31-03: minimum & maximum changed for u,v components changed to reflect better small UK domain..
*/
   {
      "10_meter_v_velocity_sfc.lam.mogreps-mo-eua",
      -100,
      10,
      -10,
      100,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},
         {"suiteName", GRIB_TYPE_STRING, 1, "mogreps-mo-eua"},

         {"paramId", GRIB_TYPE_LONG, 166},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 3},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

   {
      "convective_available_potential_energy_sfc.glob",
      0,
      10,
      0,
      17000,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 7},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },

/*
    2014-07-24: upper limit for cape minimum changed to <0,100> due to tigge_lam.LAEF_4tigge_08+0036.grib2, field 2 [convective_available_potential_energy_sfc.lam]: convective_available_potential_energy_sfc.lam minimum value 16.2219 is not in [0,10]
*/
   {
      "convective_available_potential_energy_sfc.lam",
      0,
      100,
      0,
      17000,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 59},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 7},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },

   {
      "convective_available_potential_energy_sfc.lam.glameps-hirlamcons-eu",
      -1000,
      10,
      0,
      17000,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},
         {"suiteName", GRIB_TYPE_STRING, 9, "glameps-hirlamcons-eu"},

         {"paramId", GRIB_TYPE_LONG, 59},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 7},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },

   {
      "convective_inhibition_sfc.glob",
      -60000,
      0,
      -10,
      5,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 7},
         {"parameterNumber", GRIB_TYPE_LONG, 7},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },
/* 
   eggr                  (centre=74, model=1) cin max ~ -30000
   aladinhuneps-omsz-eu  (origin=12) cin max ~ <-60000,1>
   aladinlaef-zamg-eu    (origin=)   cin max ~ <-...,1>
   cosmodeeps-dwd-eu (origin=7)
   2014-07-24: max upper limit change to <0, 4000> => tigge_lam.2014062818_slevels_lfff00000000.m011.grib2: convective_inhibition_sfc.lam.cosmodeeps-dwd-eu maximum value 3041.35 is not in [0,2000]
*/
   {
      "convective_inhibition_sfc.lam",
      -60000,
      1,
      -10,
      4000,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 228001},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 7},
         {"parameterNumber", GRIB_TYPE_LONG, 7},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },
   
   {
      "field_capacity_sfc",
      1e99,
      -1e99,
      99,
      -99,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 12},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 2},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {NULL, },
      },
      {&point_in_time, &given_thickness, &has_bitmap},
   },

   {
      "land_sea_mask_sfc.glob",
      0,
      0,
      1,
      1,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 172},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

   {
      "land_sea_mask_sfc.lam",
      0,
      0,
      1,
      1,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 172},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

   {
      "land_sea_mask_sfc.lam.hirlam-dmi-eu",
      -0.001,
      0,
      1,
      1.11,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},
         {"suiteName", GRIB_TYPE_STRING, 11, "hirlam-dmi-eu"},

         {"paramId", GRIB_TYPE_LONG, 172},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },


   {
      "orography_sfc.glob",
      -1300,
      0,
      2000,
      8888,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228002},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 5},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

/* 
   MOGREPS (origin = 1(mogreps-mo-eua))
   2014-01-08: limits for orog changed to <1000,8888>
*/

   {
      "orography_sfc.lam",
      -1300,
      0,
      1000,
      8888,
      {
        {"model", GRIB_TYPE_STRING, 0, "lam"},

        {"paramId", GRIB_TYPE_LONG, 228002},

        {"discipline", GRIB_TYPE_LONG, 0},
        {"parameterCategory", GRIB_TYPE_LONG, 3},
        {"parameterNumber", GRIB_TYPE_LONG, 5},

        {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
        {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
        {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

        {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
        {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
        {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
        {NULL, },
      },
      {&point_in_time, &predefined_level},
   },


   {
      "potential_temperature_pv",
      220,
      265,
      380,
      1200,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 2},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 109},
         {NULL, },
      },
      {&point_in_time, &given_level, &potential_vorticity_level},
   },

   {
      "potential_vorticity_pt",
      -0.005,
      -1e-6,
      1e-6,
      0.002,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 14},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 320},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 107},
         {NULL, },
      },
      {&point_in_time, &given_level, &potential_temperature_level},
   },

   {
      "skin_temperature_sfc",
      180,
      230,
      310,
      355,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 17},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

   {
      "snow_depth_water_equivalent_sfc",
      -4e-19,
      0,
      10000,
      15000,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 60},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

   {
      "snow_fall_water_equivalent_sfc",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 228144},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 53},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "soil_moisture_sfc",
      -1e-19,
      0,
      450,
      800,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 22},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 2},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {NULL, },
      },
      {&point_in_time, &given_thickness, &has_bitmap},
   },

   {
      "soil_temperature_sfc",
      200,
      230,
      300,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 2},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 2},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {NULL, },
      },
      {&point_in_time, &given_thickness},
   },
/* 
   S2S/CAWCR: specific_humidity_pl minimum value -0.0108485 is not in [-0.01,0.001]
   s2s/ammc: warning: s2s.q_20150913_4.grib2, field 71 [specific_humidity_pl]: specific_humidity_pl maximum value 0.0511279 is not in [5e-05,0.05]
*/
   {
      "specific_humidity_pl",
      -2e-2,
      1.e-3,
      5e-5,
      8e-2,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 0},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 100},
         {NULL, },
      },
      {&point_in_time, &given_level, &pressure_level},
   },

   {
      "sunshine_duration_sfc",
      0,
      0,
      3600.00000001,
      3600.00000001,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 24},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "surface_air_temperature_sfc.glob",
      180,
      290,
      270,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

/* 
warning: tigge_lam.20141019_00+045.mem009.grib2: surface_air_temperature_sfc.lam minimum value 219.508 is not in [220,290]
mogreps in the past -> min <180, 290>
*/

   {
      "surface_air_temperature_sfc.lam",
      180,
      290,
      270,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 167},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 2},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

   {
      "surface_air_temperature_sfc.lam",
      180,
      290,
      270,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},
         {"suiteName", GRIB_TYPE_STRING, 1, "mogreps-mo-eua"},

         {"paramId", GRIB_TYPE_LONG, 167},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 15},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

/* 
   cosmodeeps-dwd-eu (origin=7)
   2014-01-08: minimum limit for surface_air_dew_point_temperature_sfc changed to <160,290>
   2014-11-06: glameps: tigge_lam.20141106_00+042.mem012.grib2, surface_air_dew_point_temperature_sfc.lam minimum value 128.003 is not in [160,290]
     => [128.003,290]
*/
   {
      "surface_air_dew_point_temperature_sfc.lam",
      110,
      290,
      270,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 168},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 2},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

/* mogreps specific set up! => 1.5m instead of 2m measurements */
   {
      "surface_air_dew_point_temperature_sfc.lam",
      110,
      290,
      270,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},
         {"suiteName", GRIB_TYPE_STRING, 1, "mogreps-mo-eua"},

         {"paramId", GRIB_TYPE_LONG, 168},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 15},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },
/* 
   S2S/CAWCR: surface_air_maximum_temperature_sfc maximum value 359.388 is not in [300,330]
s2s/kwbc/enfh: warning: s2s.z_s2s_c_rhmc_20150819000000_glob_prod_0006_000.sl.grib2, field 2 [surface_air_maximum_temperature_sfc]: surface_air_maximum_temperature_sfc minimum value 179.427 is not in [190,240]
s2s/kwbc/enfh: warning: s2s.z_tigge_c_kwbc_20071002000000_ncep_prod_pf_sl_0006_001_0000_mx2t6.grib2, field 146 [surface_air_maximum_temperature_sfc]: surface_air_maximum_temperature_sfc minimum value 240.208 is not in [175,240]
s2s/isac/enfo: warning: z_s2s_c_isac_201510190000_glob_prod_pf_0744_05.sl.grib2, field 513 [surface_air_maximum_temperature_sfc]: surface_air_maximum_temperature_sfc minimum value 245.143 is not in [175,245]
s2s/lfpw/enfo: s2s.lfpw_mx2t6_2.grib2, field 3 [surface_air_maximum_temperature_sfc]: surface_air_maximum_temperature_sfc minimum value 167.434 is not in [175,250]
*/
   {
      "surface_air_maximum_temperature_sfc",
      160,
      250,
      300,
      380,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 121},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 2},
         {NULL, },
      },
      {&six_hourly, &given_level},
   },
/*
s2s_devel, ecmf, 20141222, 00UTC, test, enfo, real warning: s2s.2014122200.test.768.50.pf.sl.516.grib2, field 57 [surface_air_minimum_temperature_sfc]: surface_air_minimum_temperature_sfc maximum value 320.122 is not in [300,320]
warning: s2s.z_tigge_c_kwbc_20090817000000_ncep_prod_pf_sl_0006_002_0000_mn2t6.grib2, field 100 [surface_air_minimum_temperature_sfc]: surface_air_minimum_temperature_sfc minimum value 188.577 is not in [190,240]
s2s/kwbc/enfh: warning: s2s.z_s2s_c_rhmc_20150819000000_glob_prod_0006_000.sl.grib2, field 1 [surface_air_minimum_temperature_sfc]: surface_air_minimum_temperature_sfc minimum value 179.642 is not in [183,240]
s2s/ammc/enfo: warning: s2s.mn2t6_20150917_24.grib2, field 1 [surface_air_minimum_temperature_sfc]: surface_air_minimum_temperature_sfc minimum value 167.556 is not in [175,240]
s2s/isac/enfo: warning: z_s2s_c_isac_201510190000_glob_prod_pf_0744_24.sl.grib2, field 671 [surface_air_minimum_temperature_sfc]: surface_air_minimum_temperature_sfc minimum value 241.292 is not in [160,240]
*/
   {
      "surface_air_minimum_temperature_sfc",
      160,
      245,
      300,
      325,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 122},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 3},
         {NULL, },
      },
      {&six_hourly, &given_level},
   },

/*
s2s/ammc: warning: s2s.mx2t6_20150910_4.grib2, field 200 [surface_air_maximum_temperature_sfc.ammc]: surface_air_maximum_temperature_sfc.ammc maximum value 1516.03 is not in [300,1500]
s2s/ammc: warning: s2s.mx2t6_20151224_26.grib2, field 47 [surface_air_maximum_temperature_sfc.ammc]: surface_air_maximum_temperature_sfc.ammc maximum value 6963.63 is not in [300,5000]
*/
   {
      "surface_air_maximum_temperature_sfc.ammc",
      175,
      240,
      300,
      10000,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"centre", GRIB_TYPE_STRING, 1, "ammc"},
         {"paramId", GRIB_TYPE_LONG, 121},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 2},
         {NULL, },
      },
      {&six_hourly, &given_level},
   },

   {
      "time_integrated_top_net_thermal_radiation_sfc",
      -1e+10,
       1e+10,
      -1e+10,
       1e+10,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 179},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 5},
         {"parameterNumber", GRIB_TYPE_LONG, 5},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "time_integrated_surface_latent_heat_flux_sfc",
      -1e+10,
       1e+10,
      -1e+10,
       1e+10,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 147},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 10},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "time_integrated_surface_net_solar_radiation_sfc",
      -1e+10,
       1e+10,
      -1e+10,
       1e+10,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 176},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 4},
         {"parameterNumber", GRIB_TYPE_LONG, 9},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "time_integrated_surface_net_solar_radiation_downwards_sfc",
      -1e+10,
       1e+10,
      -1e+10,
       1e+10,

      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 169},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 4},
         {"parameterNumber", GRIB_TYPE_LONG, 7},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "time_integrated_surface_net_thermal_radiation_sfc",
      -1e+10,
       1e+10,
      -1e+10,
       1e+10,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 177},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 5},
         {"parameterNumber", GRIB_TYPE_LONG, 5},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "time_integrated_surface_net_thermal_radiation_downwards_sfc",
      -1e+10,
       1e+10,
      -1e+10,
       1e+10,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 175},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 5},
         {"parameterNumber", GRIB_TYPE_LONG, 3},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "time_integrated_surface_sensible_heat_flux_sfc",
      -1e+10,
       1e+10,
      -1e+10,
       1e+10,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"paramId", GRIB_TYPE_LONG, 146},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 11},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "total_cloud_cover_sfc",
      0,
      1e-10,
      100,
      100.00001,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 1},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },

   {
      "total_column_water_sfc",
      0.01,
      0.3,
      50,
      150,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 51},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },

/*
   hourly extreems for cumulated parameters!

   - TBD: the problem is that for tigge/tigge-lam there are cumulated parameters from step 0 and
          the limits for e.g. 0-3 period should be very different to ones for e.g. 0-120 even
          the value is divided by the period lenght in hours!
*/

   {
      "total_precipitation_sfc.glob",
      -0.05,
      0.1,
      0.,
      100.,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228228},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 52},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

/*
   2013-??-??: maximum changed to <0,133> because of cosmo-de boundary effects when coupled with IFS ..
   2014-07-16-18UTC: maximum changed to <0,200> because of GLAMEPS, v2 maximum value 170.646 (tigge_lam.20140716_18+003.mem025.grib2)
   2014-08-06-09UTC: warning: tigge_lam.20140805_12+009.mem025.grib2:total_precipitation_sfc.lam maximum value 259.002 is not in [0,200]
*/

   {
      "total_precipitation_sfc.lam",
      -0.05,
      0.1,
      0.,
      300.,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 228228},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 52},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

/*hourly extreems for cumulated parameters! */
   {
      "large_scale_precipitation_sfc.glob",
      -0.05,
      0.1,
      0.0,
      100.,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 54},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

/*
   2014-25-07: upper limit for max changed to <0,150> because of glameps => tigge_lam.20140724_18+003.mem026.grib2, large_scale_precipitation_sfc.lam maximum value 104.745 is not in [0,100]
   2014-08-11: glameps-hirlamcons-eu, 20140808, 00UTC, test: tigge_lam.20140808_00+006.mem026.grib2, large_scale_precipitation_sfc.lam maximum value 186.24 is not in [0,150]
*/
   {
      "large_scale_precipitation_sfc.lam",
      -0.05,
      0.1,
      0.0,
      300.,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 3062},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 54},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_STRING, 0, "missing"},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "wilting_point_sfc",
      1e99,
      -1e99,
      99,
      -99,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 26},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 2},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {NULL, },
      },
      {&point_in_time, &given_thickness, &has_bitmap},
   },

   {
      "maximum_wind_gust.glob",
      0,
      10,
      0,
      100,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 22},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 2},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {NULL, },
      },
      {&three_hourly, &given_level},
   },

/* 
   cosmoleps-arpasimc-eu 20140323, 12UTC, prod: tigge_lam.vmax_10m.9999.grib2, field 11 [maximum_wind_gust.lam]: maximum_wind_gust.lam maximum value 106.861 is not in [0,100] 
*/

   {
      "maximum_wind_gust.lam",
      0,
      15,
      0,
      150,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},

         {"paramId", GRIB_TYPE_LONG, 228028},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 22},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 2},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&three_hourly, &given_level},
   },

/* 
   MOGREPS (origin = 1(mogreps-mo-eua))
   2014-01-08 minimum limit for maximum_wind_gust changed to <0,12> because of mogreps data from 2014010203_03+0033
   2014-01-10 maximum limit for maximum_wind_gust changed to <0,200> because of mogreps data from 2014010403_06+0033
   2014-01-10 maximum limit for maximum_wind_gust changed to <0,333> because of mogreps data from 2014010821_11+0033
   2014-01-27 minimum limit for maximum_wind_gust changed to <0,15> because of mogreps data from 2014012521_09+0018
   2014-02-20 maximum limit for maximum_wind_gust changed to <0,500> because of mogreps data from 2014022009_02+0021
   2014-12-08 warning: tigge_lam.tigge_mogreps-uk_2014120709_00+0018.grib2, field 4 [maximum_wind_gust.lam]: maximum_wind_gust.lam maximum value 607.375 is not in [0,500]
  prod-mogreps-real-20150331-09 warning: tigge_lam.tigge_mogreps-uk_2015033109_10+0006.grib2, field 4 [maximum_wind_gust.lam]: maximum_wind_gust.lam minimum value 15.125 is not in [0,15]
*/

   {
      "maximum_wind_gust.lam",
      0,
      20,
      0,
      800,
      {
         {"model", GRIB_TYPE_STRING, 0, "lam"},
         {"suiteName", GRIB_TYPE_STRING, 1, "mogreps-mo-eua"},

         {"paramId", GRIB_TYPE_LONG, 228028},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 22},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 2},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 10},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 255},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_STRING, 0, "missing"},
         {NULL, },
      },
      {&three_hourly, &given_level},
   },

/*
s2s_devel, ecmf, 20141006, 0UTC, test: field 663 [mean_sea_level_pressure_sfc.glob]: mean_sea_level_pressure_sfc.glob minimum value 90371.6 is not in [91000,103000]
s2s_devel, ecmf: warning: s2s.128151.2014111700.test.sfc.pf.768.4.grib2, mean_sea_level_pressure_sfc maximum value 107435 is not in [98000,107000]
tigge_lam.tigge_mogreps-uk_2014122709_03+0036.grib2, field 1: mean_sea_level_pressure_sfc minimum value 103069 is not in [90000,103000]
warning: s2s.2015082000.prod.1104.50.pf.sl.648.grib2, field 335 [mean_sea_level_pressure_sfc]: mean_sea_level_pressure_sfc minimum value 89778 is not in [90000,104000]
s2s/lfpw: warning: s2s.lfpw_msl_0.grib2, field 1 [mean_sea_level_pressure_sfc]: mean_sea_level_pressure_sfc minimum value 88258.8 is not in [89000,104000]
*/
   {
      "mean_sea_level_pressure_sfc",
      88000,
      104000,
      98000,
      109000,
      {
         {"paramId", GRIB_TYPE_LONG, 151},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 101},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

/*
s2s/lfpw: warning: s2s.lfpw_msl_0.grib2, field 1 [mean_sea_level_pressure_sfc]: mean_sea_level_pressure_sfc maximum value 120427 is not in [98000,109000] xxx should be fixed by provider!!
*/
   {
      "mean_sea_level_pressure_sfc.lfpw",
      85000,
      104000,
      98000,
      121000,
      {
         {"paramId", GRIB_TYPE_LONG, 151},
         {"centre", GRIB_TYPE_STRING, 1, "lfpw"},
         {"step", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 101},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

/*
s2s_devel, ecmf, 20141229, 00UTC, test, enfh, real:    s2s.2014122900.test.768.10.pf.20131229.pl.720.grib2, field 450 [geopotential_height_pl]: geopotential_height_pl minimum value 30321.6 is not in [-850,30000]
warning: s2s.2015082000.prod.1104.50.pf.pl.648.grib2, field 2241 [geopotential_height_pl]: geopotential_height_pl minimum value -876.714 is not in [-850,30500]
s2s/lfpw: warning: s2s.lfpw_gh_1000.grib2, field 1 [geopotential_height_pl]: geopotential_height_pl minimum value -1199.08 is not in [-1000,30500]
s2s/egrr: s2s.z_s2s_c_ukmo_20160102000000_glob_prod_pf_1440_002.rt.pl.grib2, field 1211 [geopotential_height_pl]: geopotential_height_pl minimum value 30506.8 is not in [-1300,30500]
*/
   {
      "geopotential_height_pl",
      -1300,
      30600,
      200,
      35000,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 5},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 100},
         {NULL, },
      },
      {&point_in_time, &given_level, &pressure_level},
   },

/*
warning: s2s.lfpw_t_10.grib2, field 61 [temperature_pl]: temperature_pl minimum value 159.934 is not in [160,260]
*/

   {
      "temperature_pl",
      150,
      260,
      200,
      330,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 130},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 100},
         {NULL, },
      },
      {&point_in_time, &given_level, &pressure_level},
   },
/* 
   S2S/ammc: warning: s2s.t_20150906_21.grib2, field 11 [temperature_pl]: temperature_pl minimum value 44.6657 is not in [50,260]
   S2S/ammc: warning: s2s.t_20150906_24.grib2, field 321 [temperature_pl]: temperature_pl minimum value -48.9135 is not in [50,260]
*/
   {
      "temperature_pl.ammc",
      -100,
      260,
      200,
      340,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 130},
         {"centre", GRIB_TYPE_STRING, 1, "ammc"},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 100},
         {NULL, },
      },
      {&point_in_time, &given_level, &pressure_level},
   },
/* 
   S2S/CAWCR: u_velocity_pl minimum value -137.331 is not in [-120,-10]
   S2S/CAWCR: u_velocity_pl minimum value -8.77315 is not in [-120,-10]
   s2s/ammc: warning: s2s.u_20150910_1.grib2, field 270 [u_velocity_pl]: u_velocity_pl minimum value -0.81584 is not in [-150,-1]
   s2s/ammc: warning: s2s.u_20150906_28.grib2, field 430 [u_velocity_pl]: u_velocity_pl minimum value -1.09782 is not in [-150,-5]
   s2s_devel, ecmf, 20150101, 00UTC, test, enfh, real: warning: s2s.2015010100.test.768.10.pf.20140101.pl.240.grib2, field 120 [u_velocity_pl]: u_velocity_pl maximum value 154.069 is not in [10,150]
warning: s2s.z_tigge_c_kwbc_20020817000000_ncep_prod_pf_pl_0000_003_0010_u.grib2, field 3 [u_velocity_pl]: u_velocity_pl maximum value 170.9 is not in [10,170]
   s2s/ammc: warning: s2s.u_20150913_31.grib2, field 550 [u_velocity_pl]: u_velocity_pl minimum value 0.352796 is not in [-150,-0.001]
   s2s/ammc: warning: s2s.u_20151101_13.grib2, field 401 [u_velocity_pl]: u_velocity_pl minimum value -195.645 is not in [-180,1]
*/
   {
      "u_velocity_pl",
      -200,
      1,
      10,
      200,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 131},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 100},
         {NULL, },
      },
      {&point_in_time, &given_level, &pressure_level},
   },
/* 
   S2S/CAWCR: v_velocity_pl maximum value 8.54936 is not in [10,150]
   S2S/CAWCR: v_velocity_pl minimum value -128.209 is not in [-120,-10]
   ammc-s2s-enfo: warning: s2s.v_20160131_0.grib2, field 430 [v_velocity_pl]: v_velocity_pl minimum value -4.84592 is not in [-190,-5]
*/

   {
      "v_velocity_pl",
      -190,
      -4,
      4,
      190,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 132},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 3},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 100},
         {NULL, },
      },
      {&point_in_time, &given_level, &pressure_level},
   },

   {
      "u_velocity_pv",
      -120,
      -30,
      70,
      120,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 2},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 109},
         {NULL, },
      },
      {&point_in_time, &given_level, &potential_vorticity_level},
   },

   {
      "v_velocity_pv",
      -120,
      -50,
      55,
      120,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 3},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 109},
         {NULL, },
      },
      {&point_in_time, &given_level, &potential_vorticity_level},
   },
/*
   s2s_devel, ecmf, 20150101, 00UTC, test, enfh, warning: s2s.2015010100.test.768.10.pf.20020101.pl.0.grib2, field 372 [w_vertical_velocity_pl]: w_vertical_velocity_pl minimum value -5.02998 is not in [-5,0] 
warning: s2s.z_tigge_c_kwbc_20150817000000_ncep_prod_pf_pl_0000_015_0500_w.grib2, field 3 [w_vertical_velocity_pl]: w_vertical_velocity_pl minimum value -7.25731 is not in [-6,0]
  s2s/kwbc/enfo: warning: s2s.z_tigge_c_kwbc_20151114000000_ncep_prod_pf_pl_0000_011_0500_w.grib2, field 7 [w_vertical_velocity_pl]: w_vertical_velocity_pl minimum value -10.202 is not in [-10,0]

*/
   {
      "w_vertical_velocity_pl",
      -12,
      0,
      0,
      12,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 135},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 8},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 100},
         {NULL, },
      },
      {&point_in_time, &given_level, &pressure_level},
   },

   {
      "soil_type_sfc",
      0,
      1,
      5,
      10,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 43},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},

         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },
/*
s2s_devel, ecmf, 20141229, 00UTC, test, enfh, real:  s2s.2014122900.test.768.10.pf.19941229.sl.168.grib2, field 21 [surface_pressure_sfc]: surface_pressure_sfc maximum value 102851 is not in [102900,110000]
*/
   {
      "surface_pressure_sfc",
      48000,
      55000,
      102500,
      110000,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 134},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

/*todo limits*/
   {
      "eastward_turbulent_surface_stress_sfc",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 180},

         {"discipline", GRIB_TYPE_LONG,0},
         {"parameterCategory", GRIB_TYPE_LONG,2},
         {"parameterNumber", GRIB_TYPE_LONG,38},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

/*todo limits*/
   {
      "northward_turbulent_surface_stress_sfc",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 181},

         {"discipline", GRIB_TYPE_LONG,0},
         {"parameterCategory", GRIB_TYPE_LONG,2},
         {"parameterNumber", GRIB_TYPE_LONG,37},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

/*todo limits*/
   {
      "surface_runoff_sfc",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 174008},

         {"discipline", GRIB_TYPE_LONG,2},
         {"parameterCategory", GRIB_TYPE_LONG,0},
         {"parameterNumber", GRIB_TYPE_LONG,34},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

/*todo limits*/
   {
      "water_runoff_sfc",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228205},

         {"discipline", GRIB_TYPE_LONG,2},
         {"parameterCategory", GRIB_TYPE_LONG,0},
         {"parameterNumber", GRIB_TYPE_LONG,33},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "sea_ice_cover_sfc.glob",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 31},

         {"discipline", GRIB_TYPE_LONG, 10},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

   {
      "snow_density_sfc.glob",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 33},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 61},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

   {
      "sea_surface_temperature_sfc.glob",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 34},

         {"discipline", GRIB_TYPE_LONG, 10},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&point_in_time, &predefined_level},
   },

   {
      "convective_available_potential_energy_sfc.glob.s2",
      0,
      10,
      0,
      17000,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 59},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 7},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&daily_average, &predefined_thickness},
   },
/* 
   S2S/CAWCR: total_column_water_sfc.glob minimum value 0.00832421 is not in [0.01,1]
warning: s2s.z_tigge_c_kwbc_19990817000000_ncep_prod_cf_sl_0024_000_0000_tcw.grib2, field 33 [total_column_water_sfc.glob]: total_column_water_sfc.glob minimum value -0.168614 is not in [0.001,1]
warning: s2s.z_tigge_c_kwbc_20090829000000_ncep_prod_pf_sl_0024_003_0000_tcw.grib2, field 11 [total_column_water_sfc.glob]: total_column_water_sfc.glob minimum value -2.00987 is not in [-2,1]
  => [-2.00987,1]
*/
   {
      "total_column_water_sfc.glob.s2",
      -3.0,
      1,
      50,
      150,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 136},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 51},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&daily_average, &predefined_thickness},
   },

/*
s2s/rums warning: s2s.z_s2s_c_rhmc_20150819000000_glob_prod_0336_017.sl.grib2, field 4 [surface_air_temperature_sfc.glob]: surface_air_temperature_sfc.glob minimum value 177.17 is not in [180,290]
s2s/ammc: warning: s2s.2t_20151224_26.grib2, field 12 [surface_air_temperature_sfc.glob.s2]: surface_air_temperature_sfc.glob.s2 maximum value 353.017 is not in [270,350]
*/

   {
      "surface_air_temperature_sfc.glob.s2",
      170,
      290,
      270,
      360,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 167},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {NULL, },
      },
      {&daily_average, &given_level},
   },

   {
      "surface_air_dew_point_temperature_sfc",
      30,
      290,
      270,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 168},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {NULL, },
      },
      {&point_in_time, &given_level},
   },

/* 
   S2S/CAWCR: surface_air_dew_point_temperature_sfc.glob minimum value 32.4337 is not in [175,290]
*/
   {
      "surface_air_dew_point_temperature_sfc.glob.s2",
      30,
      290,
      270,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 168},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 6},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 103},
         {NULL, },
      },
      {&daily_average, &given_level},
   },
/* 
   S2S/CAWCR: skin_temperature_sfc.glob maximum value 309.28 is not in [310,355]
s2s/kwbc/enfh: warning: s2s.z_s2s_c_rhmc_20150819000000_glob_prod_1464_000.sl.grib2, field 17 [skin_temperature_sfc.glob]: skin_temperature_sfc.glob minimum value 237.261 is not in [
s2s/rums/enfo warning: s2s.z_s2s_c_rhmc_20150826000000_glob_prod_1392_003.sl.grib2, field 15 [skin_temperature_sfc.glob]: skin_temperature_sfc.glob minimum value 240.467 is not in [180,240]
s2s/ammc/enfo warning: warning: s2s.skt_20150920_4.grib2, field 12 [skin_temperature_sfc.glob]: skin_temperature_sfc.glob minimum value 179.087 is not in [180,245]
180,230]
*/
   {
      "skin_temperature_sfc.glob.s2",
      175,
      245,
      300,
      355,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 235},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 17},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&daily_average, &predefined_level},
   },

/* 
   S2S/CAWCR: soil_moisture_top_20_cm_sfc.glob maximum value 150 is not in [450,800]
warning: s2s.z_s2s_c_babj_20150817000000_glob_prod_cf_1440_000.sl.grib2, field 1641 [soil_moisture_top_20_cm_sfc.glob]: soil_moisture_top_20_cm_sfc.glob minimum value 59.5781 is not in [-1e-17,0]
*/

   {
      "soil_moisture_top_20_cm_sfc.glob",
      -1e-17,
      70,
      100,
      1500,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228086},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 22},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 2},
         {NULL, },
      },
/*    {&daily_average, &given_thickness, &has_bitmap},  todo bitmap?? */
      {&daily_average, &given_thickness},
   },

/*
warning: s2s.z_s2s_c_babj_20150901000000_glob_prod_pf_1440_002.sl.grib2, field 1621 [soil_moisture_top_100_cm_sfc.glob]: soil_moisture_top_100_cm_sfc.glob minimum value 60.1641 is not in [-1e-16,60]
warning: s2s.z_s2s_c_babj_20150817000000_glob_prod_cf_1440_000.sl.grib2, field 1745 [soil_moisture_top_100_cm_sfc.glob]: soil_moisture_top_100_cm_sfc.glob maximum value 1382.83 is not in [450,800]
warning: s2s.2015092100.prod.1104.10.pf.19980921.sl.48.grib2, field 220 [soil_moisture_top_100_cm_sfc.glob]: soil_moisture_top_100_cm_sfc.glob minimum value -1.07114e-16 is not in [-1e-16,60]
s2s/rums warning: s2s.z_s2s_c_rhmc_20150819000000_glob_prod_1464_001.sl.grib2, field 17 [soil_moisture_top_100_cm_sfc.glob]: soil_moisture_top_100_cm_sfc.glob maximum value 413.812 is not in [450,1400]
*/
   {
      "soil_moisture_top_100_cm_sfc.glob",
      -1e-15,
      70,
      400,
      1400,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228087},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 22},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 10},
         {NULL, },
      },
/*    {&daily_average, &given_thickness, &has_bitmap},  todo bitmap?? */
      {&daily_average, &given_thickness},
   },
/*
s2s_devel/ecmf/enfh/rea: warning: s2s.2015011200.test.768.10.cf.20100112.sl.24.grib2, field 25 [soil_temperature_top_20_cm_sfc.glob]: soil_temperature_top_20_cm_sfc.glob minimum value 199.519 is not in [200,230]
s2s_prod/ammc/enfo:warning: s2s.st20_20151004_4.grib2, field 61 [soil_temperature_top_20_cm_sfc.glob]: soil_temperature_top_20_cm_sfc.glob minimum value 231.081 is not in [180,230]
*/
   {
      "soil_temperature_top_20_cm_sfc.glob",
      180,
      240,
      300,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228095},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 2},
         {NULL, },
      },
      {&daily_average, &given_thickness},
   },

/*
   s2s/rums warning: s2s.z_s2s_c_rhmc_20150819000000_glob_prod_0024_000.sl.grib2, field 26 [soil_temperature_top_20_cm_sfc.glob]: soil_temperature_top_20_cm_sfc.glob minimum value 0 is not in [180,230] xxx must be fiexed!!!
   s2s/rums warning: warning: s2s.z_s2s_c_rhmc_20151021000000_glob_prod_0336_019.sl.grib2, field 24 [soil_temperature_top_20_cm_sfc.glob]: soil_temperature_top_20_cm_sfc.glob minimum value 238.514 is not in [0,230]
*/
   {
      "soil_temperature_top_20_cm_sfc.glob.rums",
      0,
      250,
      300,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"centre", GRIB_TYPE_STRING, 1, "rums"},

         {"paramId", GRIB_TYPE_LONG, 228095},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 2},
         {NULL, },
      },
      {&daily_average, &given_thickness},
   },


/* 
   S2S/babj: warning: s2s.z_s2s_c_babj_20150908000000_glob_prod_cf_1440_000.sl.grib2, field 1816 [soil_temperature_top_100_cm_sfc.glob]: soil_temperature_top_100_cm_sfc.glob minimum value 199.941 is not in [200,240]
*/
   {
      "soil_temperature_top_100_cm_sfc.glob",
      190,
      240,
      300,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228096},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 10},
         {NULL, },
      },
      {&daily_average, &given_thickness},
   },

/* 
   S2S/rums: warning: s2s.z_s2s_c_rhmc_20150819000000_glob_prod_0024_000.sl.grib2, field 25 [soil_temperature_top_100_cm_sfc.glob]: soil_temperature_top_100_cm_sfc.glob minimum value 0 is not in [200,240]  xxx must be fixed!!!
   S2S/rums: warning: s2s.z_s2s_c_rhmc_20151021000000_glob_prod_0360_019.sl.grib2, field 23 [soil_temperature_top_100_cm_sfc.glob.s2.rums]: soil_temperature_top_100_cm_sfc.glob.s2.rums minimum value 240.084 is not in [0,240]
*/
   {
      "soil_temperature_top_100_cm_sfc.glob.s2.rums",
      0,
      250,
      300,
      350,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},
         {"centre", GRIB_TYPE_STRING, 1, "rums"},

         {"paramId", GRIB_TYPE_LONG, 228096},

         {"discipline", GRIB_TYPE_LONG, 2},
         {"parameterCategory", GRIB_TYPE_LONG, 0},
         {"parameterNumber", GRIB_TYPE_LONG, 2},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfFirstFixedSurface", GRIB_TYPE_LONG, 0},
         {"scaledValueOfFirstFixedSurface", GRIB_TYPE_LONG, 0},

         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 106},
         {"scaleFactorOfSecondFixedSurface", GRIB_TYPE_LONG, 1},
         {"scaledValueOfSecondFixedSurface", GRIB_TYPE_LONG, 10},
         {NULL, },
      },
      {&daily_average, &given_thickness},
   },
/* 
   S2S/CAWCR: snow_depth_water_equivalent_sfc.glob maximum value 9066.25 is not in [10000,15000]
warning: s2s.z_tigge_c_kwbc_19990817000000_ncep_prod_cf_sl_0024_000_0000_sd.grib2, field 19 [snow_depth_water_equivalent_sfc.glob]: snow_depth_water_equivalent_sfc.glob maximum value 219.94 is not in [9000,15000]
  s2s/isac:warning: s2s.z_s2s_c_isac_201510190000_glob_prod_cf_0744_00.sl.grib2, field 25 [snow_depth_water_equivalent_sfc.glob]: snow_depth_water_equivalent_sfc.glob maximum value 118.824
*/
   {
      "snow_depth_water_equivalent_sfc.glob.s2",
      -4e-19,
      0,
      100,
      15000,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 228141},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 60},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&daily_average, &predefined_level},
   },

 /*
warning: s2s.z_tigge_c_kwbc_20150817000000_ncep_prod_cf_sl_0024_000_0000_tcc.grib2, field 2 [total_cloud_cover_sfc.glob]: total_cloud_cover_sfc.glob maximum value 100.716 is not in [99.99,100.01]
warning: s2s.z_s2s_c_babj_20150817000000_glob_prod_cf_1440_000.sl.grib2, field 2582 [total_cloud_cover_sfc.glob]: total_cloud_cover_sfc.glob maximum value 94.4214 is not in [99.99,100.01]
warning: s2s.z_tigge_c_kwbc_20150817000000_ncep_prod_pf_sl_0024_009_0000_tcc.grib2, field 1 [total_cloud_cover_sfc.glob]: total_cloud_cover_sfc.glob maximum value 100.503 is not in [90,100.1]
s2s/lfpw: warning: s2s.lfpw_tcc_0.grib2, field 60 [total_cloud_cover_sfc.glob]: total_cloud_cover_sfc.glob minimum value -0.0300206 is not in [0,5]
 */
   {
      "total_cloud_cover_sfc.glob.s2",
      -0.1,
      5,
      90.,
      101.,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 228164},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&daily_average, &predefined_thickness},
   },

 /*
s2s/ammc/enfo:s2s.tcc_20151004_9.grib2, field 21 [total_cloud_cover_sfc.glob]: total_cloud_cover_sfc.glob maximum value 128 is not in [90,101]
 */
   {
      "total_cloud_cover_sfc.glob.s2.ammc",
      -0.1,
      5,
      90.,
      150.,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},
         {"centre", GRIB_TYPE_STRING, 1, "ammc"},

         {"paramId", GRIB_TYPE_LONG, 228164},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&daily_average, &predefined_thickness},
   },

/*
   s2s/lfpw warning: s2s.lfpw_tcc_0.grib2, field 1 [total_cloud_cover_sfc.glob]: total_cloud_cover_sfc.glob maximum value 75 is not in [90,101] xxx should be fixed by provider!!
*/

   {
      "total_cloud_cover_sfc.glob.s2.lfpw",
      -0.1,
      5,
      70.,
      101.,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},
         {"centre", GRIB_TYPE_STRING, 1, "lfpw"},
         {"step", GRIB_TYPE_STRING, 1, "0-24"},

         {"paramId", GRIB_TYPE_LONG, 228164},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&daily_average, &predefined_thickness},
   },

   {
      "convective_precipitation_sfc.glob",
      -0.05,
      0.1,
      0.,
      100.,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228143},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 37},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 1},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&from_start, &predefined_level},
   },

   {
      "sea_ice_cover_sfc.glob.s2",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 31},
         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 10},
         {"parameterCategory", GRIB_TYPE_LONG, 2},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&daily_average, &predefined_level},
   },

   {
      "snow_density_sfc.glob.s2",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 33},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 1},
         {"parameterNumber", GRIB_TYPE_LONG, 61},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&daily_average, &predefined_level},
   },

   {
      "sea_surface_temperature_sfc.glob.s2",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},
         {"class", GRIB_TYPE_STRING, 0, "s2"},

         {"paramId", GRIB_TYPE_LONG, 34},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 10},
         {"parameterCategory", GRIB_TYPE_LONG, 3},
         {"parameterNumber", GRIB_TYPE_LONG, 0},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&daily_average, &predefined_level},
   },

   {
      "snow_albedo_sfc.glob",
      -1.5e+6,
       1.5e+6,
      -1.5e+6,
       1.5e+6,
      {
         {"model", GRIB_TYPE_STRING, 0, "glob"},

         {"paramId", GRIB_TYPE_LONG, 228032},

         {"typeOfStatisticalProcessing", GRIB_TYPE_LONG, 0},

         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 19},
         {"parameterNumber", GRIB_TYPE_LONG, 19},

         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {NULL, },
      },
      {&daily_average, &predefined_level},
   },

/* UERRA */
   {
      "total_cloud_cover_sfc.ur",
      0,
      1e-10,
      0.9999,
      100.00001,
      {
         {"class", GRIB_TYPE_STRING, 0, "ur"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 1},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },
   {
      "high_cloud_cover_sfc.ur",
      0,
      1e-10,
      0.9999,
      100.00001,
      {
         {"class", GRIB_TYPE_STRING, 0, "ur"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 5},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },
   {
      "medium_cloud_cover_sfc.ur",
      0,
      1e-10,
      0.9999,
      100.00001,
      {
         {"class", GRIB_TYPE_STRING, 0, "ur"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 4},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   },
   {
      "low_cloud_cover_sfc.ur",
      0,
      1e-10,
      0.9999,
      100.00001,
      {
         {"class", GRIB_TYPE_STRING, 0, "ur"},
         {"discipline", GRIB_TYPE_LONG, 0},
         {"parameterCategory", GRIB_TYPE_LONG, 6},
         {"parameterNumber", GRIB_TYPE_LONG, 3},
         {"typeOfFirstFixedSurface", GRIB_TYPE_LONG, 1},
         {"typeOfSecondFixedSurface", GRIB_TYPE_LONG, 8},
         {NULL, },
      },
      {&point_in_time, &predefined_thickness},
   }

};

