#include "deposit.h"
#include "ctest.h"
 
 
 CTEST(LessBlockTests, good)
 {
     const int result = provsrok(20);
     const int expected = 1;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(LessBlockTests, goodDataPass112)
 {
     const int result = sravnenie(300,10000);
     const int expected = 13600;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(MoreBlockTests, goodDataPass103)
 {
     const int result = sravnenie(200,200000);
     const int expected = 201600;
     ASSERT_EQUAL(expected, result);
 }
 
 
