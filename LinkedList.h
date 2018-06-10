#include "node.h"
#include <iostream>

using namespace std;

class LinkedList { //This is a linked list. It works simply by indexing the tail of the node
public:

	node * Head = nullptr; //stores the head of weight link

	int count = 0;

	LinkedList()
	{

	}

	void Add(int val) //Method to add a node to the Linked List and maintain the order.
	{

		node * nd = new node(val, nullptr);

		if (Head == nullptr) //If there is nothing in the Linked List
		{
			Head = nd; //Add a node
		}

		else //If there is something in the linked List
		{

			node * traverse = Head; //variable to traverse down the links
			node * previous = nullptr; //Stores address of previous node

			while (traverse != nullptr && nd->value > traverse->value)
			{
				previous = traverse;
				traverse = traverse->link; // Traverses down the links until nd's value is smaller than a links
			}

			nd->link = traverse; // Here, the link for nd is set to traverse, since traverse is less than or equal to link
			if (previous != nullptr) //If we are not at the beginning of the list
			{
				previous->link = nd; // So here, since nd is the new value appended to the rest of the list, we set traverse = link.
			}
			else
			{
				Head = nd;
			}

			//at this point, nd holds the correct link

		}

	end:
		count++; //increment size

	}

	void Print()//print values ordered by name
	{
		cout << "Ordered List: \n";
		node * Traverse = Head;
		while (Traverse != nullptr)
		{
			cout << Traverse->value << "\n";
			Traverse = Traverse->link;
		}
		cout << "\n";
	}
};
