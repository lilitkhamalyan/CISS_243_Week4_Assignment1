// Name: Lilit Khamalyan
// Class: CISS 243
// Date: 09/23/2018 
#include <iostream>
#include "LinkedList.h"
using namespace std;
int main()
{
	// Define a LinkedList int object.
	LinkedList<int> intList;
	// Build the list with int values.
	intList.appendNode(3);
	intList.appendNode(5);
	intList.appendNode(7);
	cout << "Here is the list of integer numbers." << endl;
	// Display the list. 
	intList.displayList();
	// Inser two nodes in the list. 
	intList.insertNode(15);
	intList.insertNode(63);
	cout << "Here is the new list." << endl;
	// Display the new list with two new numbers.
	intList.displayList();
	// Delete the second node.
	cout << "Now deleting the second node." << endl;
	intList.deleteNode(5);
	// Display the new list.
	cout << "Here are the nodes left" << endl;
	intList.displayList();
	// Search and display the index of the number.
	// Since 10 is not a number on the list return -1.
	cout << "Here is the index for a node that is not in the list: " << intList.searchList(10) << endl;
	// Search and display the index of the number.
	// Since 15 is a number on the list return the index.
	cout << "Here is the index for a node that is in the list: " << intList.searchList(15) << endl;
	// Define a LinkedList double object.
	LinkedList<double> doubleList;
	// Build the list with double values.
	doubleList.appendNode(3.7);
	doubleList.appendNode(5.98);
	doubleList.appendNode(7.14);
	cout << "Here is the list of double numbers." << endl;
	// Display the list. 
	doubleList.displayList();
	// Inser a node in the list. 
	doubleList.insertNode(15.69);
	cout << "Here is the new list." << endl;
	// Display the new list with a new number.
	doubleList.displayList();
	// Delete the third node.
	cout << "Now deleting the third node." << endl;
	doubleList.deleteNode(7.14);
	// Display the new list.
	cout << "Here are the nodes left" << endl;
	doubleList.displayList();
	// Search and display the index of the number.
	// Since 7.5 is not a number on the list return -1.
	cout << "Here is the index for a node that is not in the list: " << doubleList.searchList(7.5) << endl;
	// Search and display the index of the number.
	// Since 3.7 is a number on the list return the index.
	cout << "Here is the index for a node that is in the list: " << doubleList.searchList(3.7) << endl;
	system("pause");
	return 0;
}