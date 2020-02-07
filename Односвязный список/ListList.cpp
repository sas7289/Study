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
}


