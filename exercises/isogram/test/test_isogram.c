#include "vendor/unity.h"
#include "../src/isogram.h"
#include <stdlib.h>

#ifdef RUN_ALL_TESTS
#define TEST_IGNORE_MESSAGE(X)
#endif

void test_empty_string(void)
{
   TEST_ASSERT_TRUE(isIsogram(""));
}

void test_lower_case_only(void)
{
   TEST_IGNORE(); // delete this line to run test
   TEST_ASSERT_TRUE(isIsogram("isogram"));
}

void test_duplicated_letter(void)
{
   TEST_IGNORE();
   TEST_ASSERT_FALSE(isIsogram("eleven"));
}

void test_longest_known_isogram(void)
{
   TEST_IGNORE();
   TEST_ASSERT_TRUE(isIsogram("subdermatoglyphic"));
}

void test_duplicated_letter_mixed_case(void)
{
   TEST_IGNORE();
   TEST_ASSERT_FALSE(isIsogram("Alphabet"));
}

void test_non_letter_char(void)
{
   TEST_IGNORE();
   TEST_ASSERT_TRUE(isIsogram("thumbscrew-japingly"));
}

void test_duplicated_non_letter_char(void)
{
   TEST_IGNORE();
   TEST_ASSERT_TRUE(isIsogram("Hjelmqvist-Gryb-Zock-Pfund-Wax"));
}

void test_multiple_whitespace(void)
{
   TEST_IGNORE();
   TEST_ASSERT_TRUE(isIsogram("Emily Jung Schwartzkopf"));
}

void test_duplicated_letter_within_word(void)
{
   TEST_IGNORE();
   TEST_ASSERT_FALSE(isIsogram("accentor"));
}

int main(void)
{
   UnityBegin("test/test_isogram.c");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_lower_case_only);
   RUN_TEST(test_duplicated_letter);
   RUN_TEST(test_longest_known_isogram);
   RUN_TEST(test_duplicated_letter_mixed_case);
   RUN_TEST(test_non_letter_char);
   RUN_TEST(test_duplicated_non_letter_char);
   RUN_TEST(test_multiple_whitespace);
   RUN_TEST(test_duplicated_letter_within_word);

   UnityEnd();
   return 0;
}
