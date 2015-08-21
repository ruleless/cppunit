#ifndef __SAMPLE_H__
#define __SAMPLE_H__

#include "cppunit/Test.h"
#include "cppunit/extensions/HelperMacros.h"
#include "cppunit/ui/text/TestRunner.h"

class Sample : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(Sample);
	CPPUNIT_TEST(testFunc);
	CPPUNIT_TEST_SUITE_END();
public:
	virtual void setUp() {};

	virtual void tearDown() {};
protected:
	void testFunc();
};

#endif // __SAMPLE_H__