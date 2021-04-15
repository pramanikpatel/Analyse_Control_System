#ifndef __FUN_H__
#define __FUN_H__

/*declaring quality factor function*/
float quality_factor(float *ptr);

/*declaring function stab_check*/
void stab_check(float *ptr);

/*declaring rise_time function*/
float rise_time(float *ptr,float *ptr_1);

/*declaring overshoot function*/
float overshoot(float *ptr);

/*declaring setling_time function*/
float setling_time(float *ptr,float *ptr_1)

/*declaring delay_time function*/
float delay_time(float *ptr, float *ptr_1)

#endif 
