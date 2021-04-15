#include"unity.h"
#include"header.h"
#include<string.h>

#define PROJECT_NAME "Hotelmanagement"

void test_menu();
void test_list();
void test_search();
void test_exit1();

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
  RUN_TEST(test_menu);
  RUN_TEST(test_list);
  RUN_TEST(test_search);
  RUN_TEST(test_exit1);  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_menu()
{
TEST_ASSERT_EQUAL(1,menu(1));
TEST_ASSERT_EQUAL(2,menu(2));
TEST_ASSERT_EQUAL(3,menu(3));
TEST_ASSERT_EQUAL(4,menu(4));
TEST_ASSERT_EQUAL(5,menu(5));
TEST_ASSERT_EQUAL(6,menu(6));
}

void test_exit1()
{
   TEST_ASSERT_EQUAL(1, exit1(0));
}

void test_list()
{
  TEST_ASSERT_EQUAL(1,list(1));
}

void test_search()
{
  TEST_ASSERT_EQUAL(1, search(1,"1"));
  TEST_ASSERT_EQUAL(0,search(1,"random"));
}

