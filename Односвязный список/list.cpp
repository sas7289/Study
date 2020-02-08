#include "list.h"

using namespace std;


Node* create(char* iname)
{
	Node* n = new Node;
	n->name = iname;
	n->next = NULL;
	return n;
}

ostream& operator << (ostream& os, Node* n)
{
	if (n == NULL)
	{
		return os;
	}
	os << n->name;
	return os;
}

void add(Node* head, Node* item)
{
	Node* temp = head;
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
	Node* ret = head;
	for (int i = 0; i < position; ++i)
	{
		ret = ret->next;
		if (ret == NULL)
		{
			cout << "\nThere is no such element\n";
			return 0;
		}
	}
	return ret;
}

Node* copy(Node* head)  //сделать на create и insertafter
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

void insertAfter(Node* item, Node* newItem)
{
	newItem->next = item->next;
	item->next = newItem;
}

void insertAfter(Node* item, char* newItem)
{
	Node* middle = new Node;
	middle->name = newItem;
	middle->next = item->next;
	item->next = middle;
}

int compare(Node* list, Node* sampleList)
{
	while (sampleList->name != NULL)
	{
		if (list->name == sampleList->name)
		{
			continue;
		}
		return 1;
	}
	return 0;
}