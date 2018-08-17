//James Hsiao chapter 18 Assignment 7/31/17
//main program to demo/drive IntStack
#include "stdafx.h"
#include "IntStack.h"

int displayMenu();
int intVal();
int main()
{
	IntStack stack;
	
	int choice = 0;
	int intIn = 0;
	//switch that controls which function to execute based on user inputs.
	while (choice != 8)
	{
		choice = displayMenu();
		switch (choice)
		{
		case 1:
			intIn = intVal();
			stack.push(intIn);
			break;

		case 2:
			if(stack.pop() ==-1)
			{
				cout << "Stack is empty\n";
			}
			else { cout << "Integer removed\n"; }
			break;

		case 3:
			if (stack.add() == -1)
			{
				cout << "Insufficient data in stack for operation\n";
			}
			else { cout << "operation completed"; }
			break;

		case 4:
			if (stack.subtract() == -1)
			{
				cout << "Insufficient data in stack for operation\n";
			}
			else { cout << "operation completed"; }
			break;
			

		case 5:
			if (stack.multi() == -1)
			{
				cout << "Insufficient data in stack for operation\n";
			}
			else { cout << "operation completed"; }
			break;

		case 6:
			if (stack.div() == -1)
			{
				cout << "Cannot divide by zero or Insufficient data in stack for operation\n";
			}
			else { cout << "operation completed"; }
			break;

		case 7:
			stack.display();
			break;

		case 8:
			exit(0);
			break;
			//default message diplayed to prompt users to enter valid input option 
		default:
			cout << "wrong menu choice\n";

		}
	}


}

//function for menu input
int displayMenu()
{
	int choiceNum = 0;
	cout << "\n1. Push an integer onto the stack.\n";
	cout << "2. Pop an integer off the stack.\n";
	cout << "3. Pop the top two integers and replace them with the sum.\n";
	cout << "4. Pop and subtract top two integers and replace them with the difference .\n";
	cout << "5. Pop and multiply top two integers and replaced with their product.\n";
	cout << "6. Pop and divide top two integers and replace with their quotient.\n";
	cout << "7. Display Stack\n";
	cout << "8. Exit\n";
	cout << "Enter your choice:";
	cin >> choiceNum;
	return choiceNum;
}

// function for input validation
int intVal()
{
	int input;
	cout << "Please enter an integer:";
	cin >> input;
	while (cin.fail())
	{
		cout << "Input was not an integer. Please try again." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> input;
	}
	return input;
}