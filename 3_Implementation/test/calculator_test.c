#include "unity.h"
#include <calc_test.h>


void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);


void setUp(){}

void tearDown(){}


int main()
{

  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);

  /* Close the Unity Test Framework */
  return UNITY_END();
}


void test_addition(void) {
  TEST_ASSERT_EQUAL(3, addition(1, 2));
  

}

void test_subtraction(void) {
  TEST_ASSERT_EQUAL(2, subtraction(5, 3));


}

void test_multiplication(void) {
  TEST_ASSERT_EQUAL(10, multiply(5, 2));


}

void test_division(void) {
  TEST_ASSERT_EQUAL(2, divide(4, 2));

}