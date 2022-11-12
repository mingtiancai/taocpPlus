#include "testGcd.h"
#include <iostream>
#include <gtest/gtest.h>
#include "../../src/volume1/gcd.h"

using namespace std;

void testGcd()
{
	EXPECT_EQ(gcd(20,2),2);
	EXPECT_EQ(gcd(21,2),2);
}