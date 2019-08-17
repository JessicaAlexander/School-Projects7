// LinkedList.cpp

#include "pch.h"
#include <iostream>
using namespace std;

struct nodeType {
	int value;
	nodeType *link;
};

void reversePrint(nodeType *p);
int main()
{

	nodeType *first, *newNode, *last;
	int userInput = 0;

	first = nullptr;
	last = nullptr;

	cout << "Please enter an integer(Enter 999 to stop): ";
	cin >> userInput;

	while (userInput != 999)
	{
		newNode = new nodeType;
		newNode -> value = userInput;
		newNode -> link = nullptr;

		if (first == nullptr)
		{
			first = newNode;
			last = newNode;
		}
		else
		{
			last->link = newNode;
			last = newNode;
		}
		cout << "Please enter an integer(Enter 999 to stop): ";
		cin >> userInput;
	}
	reversePrint(first);
}
void reversePrint(nodeType *p)
{
	if (p != nullptr)
	{
		reversePrint(p->link);
		cout << p-> value << " ";
	}
}