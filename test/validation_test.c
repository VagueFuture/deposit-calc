#include "deposit.h"
#include "ctest.h"

CTEST(PenaltyTest, penaltyAppliedTenPercentOK)
 {
     const int result = provsrok(300);
     const int expected = 1;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(LessBlockTests, good)
 {
     const int result = provsumm(10000);
     const int expected = 1;
     ASSERT_EQUAL(expected, result);
 }
