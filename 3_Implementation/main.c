/*Including required header file*/
#include "stdio.h"
#include "math.h"
#include "Analy_cont_sys.h"

/*main Function*/
void main()
{
    /* variable declaration of coeffcient array,natural frequency , zeta , damping frequency*/
   float den[3],nat_freq=0,zeta=0,dam_freq=0;

   printf("Enter denominator coefficient\n");

   /*take denominator polynomial coeffcient*/
   for(int i=0;i<=2;i++)
       scanf("%f",&den[i]);

    /*calculating natural frequency, zeta,damping frequency */
    nat_freq=sqrt(den[2]);
    zeta=den[1]/(2*nat_freq);
    dam_freq=nat_freq*sqrt(1-zeta*zeta);

    printf("Natural frequency of oscillation is %f \n Damping ratio is  %f \n Damp frequency is  %f\n",nat_freq,zeta,dam_freq);
    
    /*check for stability*/
    stab_check(den);

    /*execute following commands only if system is stable*/
    if(den[0]*den[1]*den[2] > 0)
    {
    /*calling required functions*/
    rise_time(&zeta,&dam_freq);
    overshoot(&zeta);
    setling_time(&zeta,&nat_freq);
    delay_time(&zeta,&nat_freq);
    quality_factor(&zeta);
    }
}


