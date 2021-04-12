#include "Analy_cont_sys.h"
#include "stdio.h"

/**
 * @brief this function returns quality factor
 * 
 * @param ptr 
 */
float quality_factor(float *ptr)
{
	printf("Quality Factor is %f",1/(2* (*ptr)));
	return 1/(2* (*ptr));
} 