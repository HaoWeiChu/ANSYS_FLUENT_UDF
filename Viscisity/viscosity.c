/* 練習如何改變 ANSYS FLUENT 流體性質*/
/* User-defined-function for temperature-dependent viscosity */ 
/*  mu = 5.5* 10e-3      T > 288 */
/*  mu = 143.2135-0.49725   286 =< T =< 288*/

#include "udf.h"
 DEFINE_PROPERTY(user_vis,cell,thread)
{
 float temp, mu; /*定義 想控制的參數(溫度、黏滯係數)*/
 
 temp = C_T(cell,thread);
 {
    if(temp >288.)
    mu = 5.5e-3;
    else if(temp >= 286.)
    mu = 143.2135-0.49725*temp;
    else 
    mu = 1.0;
 }

 return mu;
}