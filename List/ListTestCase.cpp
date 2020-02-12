//#include <cppunit/config/SourcePrefix.h>
#include "ListTestCase.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ListTestCase);

char head[] = "one";
char N1[] = "two";
char N2[] = "three";
char N3[] = "four";
char N4[] = "five";
char N5[] = "six";
char N6[] = "seven";
char test[] = "test";

void ListTestCase::setUp()
{
	sampleList = create(head);
	n1 = create(N1);
	n2 = create(N2);
	n3 = create(N3);
	n4 = create(N4);
	n5 = create(N5);
	n6 = create(N6);
	n7 = create(test);

	testList = create(head);

	add(sampleList, create(N1));
	add(sampleList, create(N2));
	add(sampleList, create(N3));
	add(sampleList, create(N4));
	add(sampleList, create(N5));
	add(sampleList, create(N6));
	add(sampleList, create(test));
}

void ListTestCase::TestCreate()
{
	nTemp = create(test);
	CPPUNIT_ASSERT(!strcmp(nTemp->name, test) && nTemp->next == nullptr);
}


void ListTestCase::TestCopy()
{
	nTemp = copy(sampleList);
	CPPUNIT_ASSERT(compare(nTemp, sampleList));
}




void ListTestCase::TestAdd()
{
	add(testList, n1);
	add(testList, n2);
	CPPUNIT_ASSERT(compare(testList, sampleList, 3));
	add(testList, n3);
	add(testList, n4);
	CPPUNIT_ASSERT(compare(testList, sampleList, 5));
	add(testList, n5);
	CPPUNIT_ASSERT(compare(testList, sampleList, 6));
	add(testList, n6);
	CPPUNIT_ASSERT(compare(testList, sampleList, 7));
}


void ListTestCase::TestInsertAfter()
{
	insertAfter(testList, n7);
	insertAfter(testList, n6);
	insertAfter(testList, n5);
	insertAfter(testList, n4);
	insertAfter(testList, n3);
	insertAfter(testList, n2);
	insertAfter(testList, n1);
	CPPUNIT_ASSERT(compare(testList, sampleList));
}

void ListTestCase::TestCount()
{
	add(testList, n1);
	CPPUNIT_ASSERT(count(testList) == 2);
	add(testList, n2);
	CPPUNIT_ASSERT(count(testList) == 3);
	add(testList, n3);
	add(testList, n4);
	add(testList, n5);
	add(testList, n6);
	CPPUNIT_ASSERT(count(testList) == 7);
}

void ListTestCase::TestAt()
{
	CPPUNIT_ASSERT(!strcmp(at(sampleList, 1)->name, n1->name));
	CPPUNIT_ASSERT(!strcmp(at(sampleList, 3)->name, n3->name));
}
