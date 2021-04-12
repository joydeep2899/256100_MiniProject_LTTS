#include "unity.h"
#include "function_generator.h"


#define PROJECT_NAME    "Function Generator"

/* Prototypes for all the test functions */
void test_sine(void);
void test_square(void);
void test_sawtooth(void);
void test_triangle(void);

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
  RUN_TEST(test_sine);
  RUN_TEST(test_sawtooth);
  RUN_TEST(test_triangle);
  RUN_TEST(test_square);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
 
void test_sine(void)
{

}
void test_square(void)
{

}
void test_sawtooth(void)
{

}
void test_triangle(void)
{

}