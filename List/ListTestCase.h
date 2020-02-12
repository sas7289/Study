#pragma once


#ifndef CPP_UNIT_EXAMPLETESTCASE_H
#define CPP_UNIT_EXAMPLETESTCASE_H

#include <cppunit/extensions/HelperMacros.h>
#include "list.h"

/*
 * A test case that is designed to produce
 * example errors and failures
 *
 */

class ListTestCase : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(ListTestCase);
    CPPUNIT_TEST(TestCreate);
    CPPUNIT_TEST(TestCopy);
    CPPUNIT_TEST(testAdd);
    CPPUNIT_TEST(TestInsertAfter);
    CPPUNIT_TEST(TestAt);
    CPPUNIT_TEST(TestCount);
    CPPUNIT_TEST_SUITE_END();

protected:
    Node* headn, * N1n, * N2n, * N3n, * N4n, * N5n, * N6n, * insN;



public:
    void setUp();

protected:
    void TestCreate();
    void TestCopy();
    void TestAdd();
    void TestInsertAfter();
    void TestAt();
    void TestCount();
};


#endif
