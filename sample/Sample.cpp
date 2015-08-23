#include "Sample.h"

CPPUNIT_TEST_SUITE_REGISTRATION(Sample);

void Sample::testFunc1()
{
	CPPUNIT_ASSERT(false);
}

void Sample::testFunc2()
{
	CPPUNIT_ASSERT(true);
}