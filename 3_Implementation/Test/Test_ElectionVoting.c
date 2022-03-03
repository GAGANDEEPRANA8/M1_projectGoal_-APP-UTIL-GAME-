#include "unity.h"
#include "unity_internals.h"
#include "ElectionVoting.h"


#define PROJECT_NAME "Election_Voting"

/* Prototypes for all the test functions */

void test_cast_vote(void);
void test_candiate_count(void);


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
/* Write all the test functions for cast vote */ 
void test_cast vote(void)
 {
     Candidate_Count;
  TEST_ASSERT_EQUAL(220, Cast Vote(220));
 }

/* Write all the test functions candidate count */ 
 void test_candidate count(void)
 {
     float units_consumed=50;
  TEST_ASSERT_EQUAL(235, candidate count(235));
 }

/* Start of the application test */
int main()
{

  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  RUN_TEST(candidate_count);
  RUN_TEST(cast_Vote);
/* Close the Unity Test Framework */
  return UNITY_END();
}