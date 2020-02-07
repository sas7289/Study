#include "list.h"

using namespace std;

struct Node
{
	char* name;
	Node* next;
};

Node* Create(char* iname)
{
	Node* n = new Node;
	n->name = iname;
	n->next = NULL;
	return n;
}

ostream& operator << (ostream& os, Node* n)
{
	os << n->name;
	return os;
}

void add(Node* head, Node* item)
{
	Node* temp;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = item;
}

void showAll(Node* head)
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp << "\n";
		temp = temp->next;
	}
}

int count(Node* head)
{
	int n = 0;
	Node* temp;
	temp = head;
	while (temp != NULL)
	{
		++n;
		temp = temp->next;
	}
	return n;
}

Node* at(Node* head, int position)
{
	Node* ret = NULL;
	ret = head;
	for (int i = 1; i != position; ++i)
	{
		ret = ret->next;
	}
	return ret;
}

Node* Copy(Node* head)
{
	Node* newh = new Node;
	newh->name = head->name;
	Node* newHead = newh;
	Node* oldHead = head->next;
	while (oldHead != NULL)
	{
		Node* newHeadNext = new Node;
		newHeadNext->name = oldHead->name;
		newHeadNext->next = NULL;
		newHead->next = newHeadNext;

		newHead = newHeadNext;
		oldHead = oldHead->next;
	}
	return newh;
}