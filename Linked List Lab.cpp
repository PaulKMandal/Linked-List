// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"
#include <string>
#include <sstream>

using namespace std;

int main()
{
	LinkedList * ll = new LinkedList();

	cout << "Enter values to be stored in a Linked List. Type -1 to quit. \n";
	int input;
	do
	{
		cin >> input;
		if (input != -1)
		{
			ll->Add(input);
		}
	} while (input != -1);

	ll->Print();
	cin.get();
}
