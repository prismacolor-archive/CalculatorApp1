#include <iostream>
using namespace std;

int main()
{
	// Now we are going to build a calculator app
	// first declare the three variables the user will need to input
	float firstValue;
	float secondValue;
	char userOperator;

	// see that the cout uses << output arrows
	cout << "The Hal9000 Calculator\n";
	
	// see that the cin uses the >> input arrows
	cin >> firstValue >> userOperator >> secondValue;

	// let's use a switch/case statement rather than a gazillion if else statements
	// you create a case for each possible response, don't forget to put break; at the end for each case to show where each case ends
	// modulo case can have errors because inputs could be floats/decimals, you need to check that both values are whole numbers first 
	switch (userOperator)
	{
	case '-': cout << firstValue << userOperator << secondValue << "=" << firstValue - secondValue; break;
	case '+': cout << firstValue << userOperator << secondValue << "=" << firstValue + secondValue; break;
	case '*': cout << firstValue << userOperator << secondValue << "=" << firstValue * secondValue; break;
	case '/': cout << firstValue << userOperator << secondValue << "=" << firstValue / secondValue; break;
	case '%': 
		bool isFirstValueInt, isSecondValueInt;
		// this will convert the inputs of your user to integers and check if they are equal to the original input. If so, user entered a whole number
		isFirstValueInt = (int)firstValue == firstValue;
		isSecondValueInt = (int)secondValue == secondValue;
		if(isFirstValueInt && isSecondValueInt)
			cout << firstValue << userOperator << secondValue << "=" << (int)firstValue % (int)secondValue;
		else
			cout << "I'm sorry, Dave. I can't do that.\n";
		break;
	default: cout << "I'm sorry, Dave. I can't do that.\n";

	}

	// todo, fix what happens when user enters things that are not numbers or if there are missing numbers, also how to loop through this so it can be reused

	system("pause>0");
}
