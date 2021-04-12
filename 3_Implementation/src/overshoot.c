#include "Analy_cont_sys.h"
#include "math.h"
#include "stdio.h"

/**
 * @brief this function calculates overshoot
 * 
 * @param ptr 
 */
float overshoot(float *ptr)
{
    float over;
    printf("Overshoot is %f\n",100*pow(2.718,-(*ptr)*3.14/sqrt(1-(*ptr)*(*ptr) )));
    return 100*pow(2.718,-(*ptr)*3.14/sqrt(1-(*ptr)*(*ptr) ));
}
