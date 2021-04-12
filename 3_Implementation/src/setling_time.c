
#include "Analy_cont_sys.h"
#include "stdio.h"
/**
 * @brief this function print settling time
 * 
 * @param ptr 
 * @param ptr_1 
 */

float setling_time(float *ptr,float *ptr_1)
{
    printf("setling time is %f\n",4/((*ptr)* (*ptr_1)));
    return 4/((*ptr)* (*ptr_1));
}
