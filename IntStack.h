//James Hsiao chapter 18 Assignment 7/31/17
#pragma once
#include "stdafx.h"
//header files for the dynamic int stack
#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack
{
private:
	struct StackNode
	{
		int value;
		StackNode *next;
	};

	StackNode *top;
public:
	IntStack()
	{
		top = NULL;
	}

//stack operations
	void push(int);
	int pop();
	bool isEmpty();
	int add();
	int subtract();
	int multi();
	int div();
	void display();

};
#endif