#include "Analy_cont_sys.h"
#include "stdio.h"
/**
 * @brief this function calculates delay time
 * 
 * @param ptr 
 * @param ptr_1 
 */

float delay_time(float *ptr, float *ptr_1)
{
    printf("Delay time is %f\n",(1+(0.7)* (*ptr) )/ *ptr_1);
    return (1+(0.7)* (*ptr) )/ *ptr_1 ;
}