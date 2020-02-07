#pragma once
#include <iostream>
#ifndef list_h
#define list_h


using namespace std;

struct Node;

Node* Create(char* iname);

ostream& operator << (ostream& os, Node* n);

void add(Node* head, Node* item);

void showAll(Node* head);

int count(Node* head);

Node* at(Node* head, int position);

Node* Copy(Node* head);

#endif // !list_h