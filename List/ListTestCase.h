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
    CPPUNIT_TEST(TestAdd);
    CPPUNIT_TEST(TestInsertAfter);
    CPPUNIT_TEST(TestAt);
    CPPUNIT_TEST(TestCount);
    CPPUNIT_TEST_SUITE_END();

protected:
    Node * testList, * nTemp;


public:
    void setUp();

protected:
    void TestCreate();
    void TestCopy();
    void TestAdd();
    void TestInsertAfter();
    void TestAt();
    void TestCount();
private:

    Node* sampleList, * n1, * n2, * n3, * n4, * n5, * n6, * n7;

};


#endif
