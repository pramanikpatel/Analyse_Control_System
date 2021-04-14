#include "Analy_cont_sys.h"
#include "math.h"
#include "stdio.h"

/**
 * @brief this function prints rise time
 * 
 * @param ptr 
 * @param ptr_1 
 */
float rise_time(float *ptr,float *ptr_1)
{
	if(*ptr == 0 || *ptr_1==0)
	{
		return 0.0;
	}
	else
	{
    	float ris_tim;
    	ris_tim= (3.14-acos(*ptr))/(*ptr_1);
        printf("Rise time of the system is %f\n",ris_tim);
        return ris_tim;
    }
}
