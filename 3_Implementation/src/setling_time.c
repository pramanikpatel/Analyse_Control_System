
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
	if(*ptr == 0 || *ptr_1==0)
	{
		return 0.0;
	}
	else
	{
    	printf("setling time is %f\n",4/((*ptr)* (*ptr_1)));
    	return 4/((*ptr)* (*ptr_1));
    }
}
