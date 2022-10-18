#include "mystack.h"
#include <stdlib.h>

#pragma region STACK FUNCTIONS

/// <summary>
/// This function is used to push the item in stock.
/// </summary>
/// <param name="myStack"></param>
/// <param name="data"></param>
/// <returns></returns>
int push(MyStack* myStack, Data* data) {
	/// <summary>
	/// this function is used to add items and create LL
	/// </summary>
	/// <param name="myStack"></param>
	/// <param name="data"></param>
	/// <returns></returns>
	MyStack* temp = new MyStack;
	/// <summary>
	/// this function is used to add data to ll.
	/// </summary>
	/// <param name="myStack"></param>
	/// <param name="data"></param>
	/// <returns></returns>
	temp->data = data->key;
	temp->link = myStack->link;
	myStack->link = temp;

	return 0;
}

/// <summary>
/// This function is used to open the item from the stack.
/// </summary>
/// <param name="myStack"></param>
/// <returns></returns>
Data* pop(MyStack* myStack) {
	if (myStack->link == NULL) {
		return NULL;
	}
	MyStack* temp = myStack->link;
	myStack->link = temp->link;
	Data* data = new Data();
	data->key = temp->data;
	delete(temp);
	return 0;
}
/// <summary>
/// This function is used to look at the item from the stack.
/// </summary>
/// <param name="myStack"></param>
/// <returns></returns>
Data* top(MyStack* myStack)
{
	if (myStack->link == NULL) {
		return NULL;
	}
	else {
		Data* data = new Data();
		data->key = myStack->link->data;
	}
	return 0;
}
/// <summary>
/// To bottom item from stack
/// </summary>
/// <param name="myStack"></param>
/// <returns></returns>
Data* bottom(MyStack* myStack)
{
	if (myStack->link == NULL) {
		return NULL;
	}
	else {
		MyStack* temp = myStack->link;
		while (temp->link != NULL) {
			temp = temp->link;
		}
		Data* data = new Data();
		data->key = temp->data;
	}
	return 0;
}
/// <summary>
/// This function is used to display the item in stack.
/// </summary>
/// <param name="myStack"></param>
/// <returns></returns>
int stackLength(MyStack* myStack) {
	int count = 0;
	MyStack* temp = myStack->link;
	/// <summary>
	/// this function is used to count the products in stack.
	/// </summary>
	/// <param name="myStack"></param>
	/// <returns></returns>
	while (temp != NULL) {
		count++;
		temp = temp->link;
	}
	return count;
}

#pragma endregion