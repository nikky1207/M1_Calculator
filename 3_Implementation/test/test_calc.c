#include "function.h"
 
#define PROJECT_NAME " SIMPLE Calculator"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtract(void);
void test_multiply(void);
void test_division(void);
void test_sq(void);
void test_sqrt1(void);

/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

/* Start of the application test */
int main(void)
{

  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();
 
  

  /* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_division);
  RUN_TEST(test_sq);
  RUN_TEST(test_sqrt1);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_addition(void)
{
  TEST_ASSERT_EQUAL(43, addition(20, 23));

}

void test_subtraction(void)
{
  TEST_ASSERT_EQUAL(-11, subtract(0, 11));

  
}

void test_multiplication(void)
{
  TEST_ASSERT_EQUAL(10, multiply(2, 5));

}

void test_division(void)
{
  TEST_ASSERT_EQUAL(3.00, divide(9, 3));


}

void test_sq(void)
{
  TEST_ASSERT_EQUAL(81, sq(9));

  
}

void test_square_root(void)
{
  TEST_ASSERT_EQUAL(11, sqrt1(121));

}

