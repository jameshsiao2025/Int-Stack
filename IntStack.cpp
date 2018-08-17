//James Hsiao chapter 18 Assignment 7/31/17

#include "stdafx.h"
#include "IntStack.h"
#include <iostream>
using namespace std;

//member function to test if stack is empty
bool IntStack::isEmpty()
{
	bool status;
	if (!top)
		status = true;
	else
		status = false;
	return status;
}

//function to push argument onto stack
void IntStack::push(int num)
{
	StackNode *newNode;
	newNode = new StackNode;
	newNode->value = num;
	if (isEmpty())
	{
		top = newNode;
		newNode->next = NULL;
	}
	else 
	{
		newNode->next = top;
		top = newNode;
	}

}

//function to pop the value at the top of the stack. 
int IntStack::pop()
{
	StackNode *temp;
	int data;

	if (isEmpty())
	{
		return -1 ;
	}
	else {
		data = top->value;
		temp = top->next;
		delete top;
		top = temp;
		return data;
	}
}

//function to pop the top two values and return the sum
int IntStack::add()
{
	int num, sum;

	sum = pop();
	num = pop();

	if(num == -1 || sum == -1)
	{
		return -1;
	}
	else
	{
		sum = sum + num;
		push(sum);
		push(sum);		
		return sum;
	}
}

//function to pop off the top two values and return the difference. 
int IntStack::subtract()
{
	int num, diff;

	diff = pop();
	num = pop();

	if (num == -1 || diff == -1)
	{
		return -1;
	}
	else
	{
		diff = diff - num;
		push(diff);
		push(diff);
		return diff;
	}
}

//function to pop off the top two values and return their product
int IntStack::multi()
{
	int num, product;

	product = pop();
	num = pop();

	if (num == -1 || product == -1)
	{
		return -1;
	}
	else
	{
		product = product * num;
		push(product);
		push(product);
		return product;
	}
}

//function to pop off the top two values and return their quotient
int IntStack::div()
{
	int num, quotient;

	quotient = pop();
	num = pop();


	if (num == 0 || num == -1 || quotient == -1)
	{
		return -1;
	}
	else
	{
		quotient = quotient / num;
		push(quotient);
		push(quotient);
		return quotient;

	}
}

void IntStack::display()
{
	StackNode *nodePtr;  // To move through the list

						// Position nodePtr at the head of the list.
	nodePtr = top;

	// While nodePtr points to a node, traverse
	// the list.
	while (nodePtr)
	{
		// Display the value in this node.
		cout << nodePtr->value << endl;

		// Move to the next node.
		nodePtr = nodePtr->next;
	}
}