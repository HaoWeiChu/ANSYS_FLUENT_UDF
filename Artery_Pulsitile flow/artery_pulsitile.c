
#include "udf.h"
 DEFINE_PROFILE(inlet_mf,th,i)
{
 face_t f;
 begin_f_loop(f,th)
{

if (CURRENT_TIME>=0 && CURRENT_TIME<=0.101)
 
  F_PROFILE(f,th,i) =-0.002*CURRENT_TIME+0.0051;

else if (CURRENT_TIME>0.101 && CURRENT_TIME<=0.204)
  
F_PROFILE(f,th,i) =0.107*(CURRENT_TIME)-0.006;

else if (CURRENT_TIME>0.204 && CURRENT_TIME<=0.291)

 F_PROFILE(f,th,i)=-0.088*(CURRENT_TIME)+0.034;

else if(CURRENT_TIME>0.291 && CURRENT_TIME<=0.377)

 F_PROFILE(f,th,i)=0.005*(CURRENT_TIME)+0.007;
 
else if(CURRENT_TIME>0.377 && CURRENT_TIME<=0.514)

 F_PROFILE(f,th,i)=-0.027*(CURRENT_TIME)+0.019;
 
else if(CURRENT_TIME>0.514 && CURRENT_TIME<=0.584)

 F_PROFILE(f,th,i)=0.029*(CURRENT_TIME)-0.01;

else if(CURRENT_TIME>0.584 && CURRENT_TIME<=0.714)

 F_PROFILE(f,th,i)=-0.01*(CURRENT_TIME)+0.01284;

else if(CURRENT_TIME>0.714 && CURRENT_TIME<1)

 F_PROFILE(f,th,i)=-0.002*(CURRENT_TIME)+0.0072;



 end_f_loop(f,th);
}
}