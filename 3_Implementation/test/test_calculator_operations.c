#include "unity.h"
#include "unity_internals.h"
#include <Analy_cont_sys.h>
void test_quality_factor();
void test_rise_time();
void test_overshoot();
void test_setling_time();
  void test_delay_time();

/* Modify these two lines according to the project */
#define PROJECT_NAME    "hello"

//float nat_freq=1.732051,zeta=0.577350,dam_freq=1.414214;
  float nat_freq=0,zeta=0,dam_freq=0;
   float nat_freq_1=1.732051,zeta_1=0.577350,dam_freq_1=1.414214;

/*declaring quality factor function*/
float quality_factor(float *ptr);

/*declaring rise_time function*/
float rise_time(float *ptr,float *ptr_1);

/*declaring overshoot function*/
float overshoot(float *ptr);

/*declaring setling_time function*/
float setling_time(float *ptr,float *ptr_1);

/*declaring delay_time function*/
float delay_time(float *ptr, float *ptr_1);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_quality_factor);
  RUN_TEST(test_rise_time);
  RUN_TEST(test_overshoot);
  RUN_TEST(test_setling_time);
  RUN_TEST(test_delay_time);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_quality_factor()
{
  TEST_ASSERT_EQUAL(0, quality_factor(&zeta));
  TEST_ASSERT_EQUAL(0.866025, quality_factor(&zeta_1));
}
  
void test_rise_time()
{
  TEST_ASSERT_EQUAL(0, rise_time(&zeta,&dam_freq));
  TEST_ASSERT_EQUAL(1.544804, rise_time(&zeta_1,&dam_freq_1));
}
  

  void test_overshoot()
{
  TEST_ASSERT_EQUAL(0, overshoot(&zeta));
    TEST_ASSERT_EQUAL(10.859988, overshoot(&zeta_1));
}
  

 void test_setling_time()
{

  TEST_ASSERT_EQUAL(0,setling_time(&zeta,&nat_freq));
  TEST_ASSERT_EQUAL(4.0000,setling_time(&zeta_1,&nat_freq_1));
}
  
  void test_delay_time()
{

  TEST_ASSERT_EQUAL(0, delay_time(&zeta,&nat_freq));
   TEST_ASSERT_EQUAL(0.810684, delay_time(&zeta_1,&nat_freq_1));
}
  
