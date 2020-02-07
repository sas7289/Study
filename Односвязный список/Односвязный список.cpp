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

    Node* headn = Create(head);
    Node* N1n = Create(N1);
    Node* N2n = Create(N2);
    Node* N3n = Create(N3);
    Node* N4n = Create(N4);
    Node* N5n = Create(N5);
    Node* N6n = Create(N6);

    //cout << head;
    add(headn, N1n);
    add(headn, N2n);
    add(headn, N3n);
    add(headn, N4n);
    add(headn, N5n);
    add(headn, N6n);

    showAll(headn);

    int countn = count(headn);
    cout << "\nCount nodes = " << countn;

    Node *ret = at(headn, 1);
    cout << "\n\n" << ret;

    Node* newHead = NULL;
    newHead = Copy(headn);
    showAll(newHead);
}


