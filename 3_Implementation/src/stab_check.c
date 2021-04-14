
#include "Analy_cont_sys.h"
#include "stdio.h"

/**
 * @brief this functions prints whether the system is stable or not
 * 
 * @param ptr 
 */
void stab_check(float *ptr)
{  
    if((*ptr) * (*(ptr+1))* (*(ptr+2))<0)
         {
             printf("The system is unstable\n");
        }
    
    else
        {
            printf("System is stable\n");
        }
}
