/*
 * File:   HelloerTest.h
 * Author: dmitry
 *
 * Created on Oct 28, 2015, 3:39:23 PM
 */

#ifndef HELLOERTEST_H
#define	HELLOERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class HelloerTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(HelloerTest);

    CPPUNIT_TEST(testMessage);
    CPPUNIT_TEST(testMessageNobody);

    CPPUNIT_TEST_SUITE_END();

public:
    HelloerTest();
    virtual ~HelloerTest();
    void setUp();
    void tearDown();

private:
    void testMessage();
    void testMessageNobody();

};

#endif	/* HELLOERTEST_H */

