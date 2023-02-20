/*User-defined Functions for x-direction temperature profile*/
/* ANSYS FLUENT Enery ON(with temp)*/
#include "udf.h"


DEFINE_PROFILE(temperature_profile, thread, position) 
{
   real r[3]; /* this will hold the position vector */
   real x;
   face_t f;

   begin_f_loop(f, thread)
   {
     F_CENTROID(r,f,thread);
     x = r[0];
     F_PROFILE(f, thread, position) = 300.+100.*(x);
   }
   end_f_loop(f, thread)
}