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
			return nullptr;
		}
	}
	return head;
}

Node* copy(Node* head)
{
	Node* newHead = create(head->name);
	Node* newList = newHead;
	head = head->next;
	while (head != NULL)
	{
		Node* nextNode = create(head->name);
		insertAfter(newHead, nextNode);
		newHead = newHead->next;
		head = head->next;
	}
	return newList;
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

bool compare(Node* list, Node* sampleList)
{
	bool finished1 = false;
	bool finished2 = false;
	do
	{
		if (strcmp(list->name, sampleList->name))
		{
			return false;
		}
		list = list->next;
		sampleList = sampleList->next;
		finished1 = list == nullptr;
		finished2 = sampleList == nullptr;

	} while (!(finished1 || finished2));
	return (finished1 == finished2);
}

bool compare(Node* list, Node* sampleList, int n)
{
	bool finished1 = false;
	bool finished2 = false;
	do
	{
		if (--n < 0)
		{
			break;
		}
		if (strcmp(list->name, sampleList->name))
		{
			return false;
		}
		list = list->next;
		sampleList = sampleList->next;
		finished1 = list == nullptr;
		finished2 = sampleList == nullptr;

	} while (!(finished1 || finished2));
	return (n <= 0 || finished1 == finished2);
}
