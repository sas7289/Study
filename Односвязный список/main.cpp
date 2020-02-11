#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/extensions/HelperMacros.h>



#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    char head[] = "one";
    char N1[] = "two";
    char N2[] = "three";
    char N3[] = "four";
    char N4[] = "five";
    char N5[] = "six";
    char N6[] = "seven";
    char ins[] = "insert";

    Node* headn = create(head);
    Node* N1n = create(N1);
    Node* N2n = create(N2);
    Node* N3n = create(N3);
    Node* N4n = create(N4);
    Node* N5n = create(N5);
    Node* N6n = create(N6);
    Node* insN = create(ins);

    //cout << head;
    add(headn, N1n);
    add(headn, N2n);
    add(headn, N3n);
    add(headn, N4n);
    add(headn, N5n);
    add(headn, N6n);

    showAll(headn);

    int countn = count(headn);
    cout << "\nCount nodes = " << countn << "\n";

    Node *ret = at(headn, 0);
    cout << "\n" << ret << "\n";

    Node* newHead = NULL;
    newHead = copy(headn);
    showAll(newHead);
    cout << "\n";
    insertAfter(N4n, insN);
    showAll(headn);
    cout << "\n";
    insertAfter(N1n, ins);
    showAll(headn);



    // Create the event manager and test controller
    CPPUNIT_NS::TestResult controller;

    // Add a listener that colllects test result
    CPPUNIT_NS::TestResultCollector result;
    controller.addListener(&result);

    // Add a listener that print dots as test run.
    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener(&progress);

    // Add the top suite to the test runner
    CPPUNIT_NS::TestRunner runner;
    runner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    runner.run(controller);

    // Print test in a compiler compatible format.
    CPPUNIT_NS::CompilerOutputter outputter(&result, CPPUNIT_NS::stdCOut());
    outputter.write();

    return result.wasSuccessful() ? 0 : 1;
}


