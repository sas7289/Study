#pragma once
#include <iostream>
#ifndef list_h
#define list_h


using namespace std;

struct Node
{
	char* name;
	Node* next;
};

Node* create(char* iname);

ostream& operator << (ostream& os, Node* n);

void add(Node* head, Node* item);

void insertAfter(Node* item, Node* newItem);

void insertAfter(Node* item, char* newItem);

void showAll(Node* head);

int count(Node* head);

Node* at(Node* head, int position);

Node* copy(Node* head);

#endif // !list_h