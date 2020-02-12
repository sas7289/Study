#include "list.h"

using namespace std;


Node* create(char* iname)
{
	Node* n = new Node;
	n->name = iname;
	n->next = nullptr;
	return n;
}

ostream& operator << (ostream& os, Node* n)
{
	if (n == nullptr)
	{
		return os;
	}
	os << n->name;
	return os;
}

void add(Node* head, Node* item)
{
	while (head->next != nullptr)
	{
		head = head->next;
	}
	head->next = item;
}

void showAll(Node* head)
{
	while (head != nullptr)
	{
		cout << head << "\n";
		head = head->next;
	}
}

int count(Node* head)
{
	int n = 0;
	while (head != nullptr)
	{
		++n;
		head = head->next;
	}
	return n;
}

Node* at(Node* head, int position)
{
	for (int i = 0; i < position; ++i)
	{
		head = head->next;
		if (head == nullptr)
		{
			cout << "\nThere is no such element\n";
			return 0;
		}
	}
	return head;
}

Node* copy(Node* head)  //сделать на create и insertafter
{
	Node* newHead = create(head->name);
	Node* newList = newHead->next;
	head = head->next;
	while (head != NULL)
	{
		newList = create(head->name);
		//insertAfter(newHead, newList);
		newList = newList->next;
		head = head->next;
	}
	return newHead;
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