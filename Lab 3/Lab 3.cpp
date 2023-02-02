// Lab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Divison" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
	// The rest of this function is an exercise to the reader
}
void firstChoice(float A, float B) {
	
}
void secondChoice(float A, float B) {
	
}
void thirdChoice(float A, float B) {
	
}
void fourthChoice(float A, float B) {
	
}
int main() 
{
	int choice;
	float A;
	float B;
	
	
	
	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) //Add
	{
		firstChoice(A, B);
		cout << A << "+" << B << "=" << A + B << endl;
	}
	else if (choice == 2) //Sub
	{
		secondChoice(A, B);
		cout << A << "-" << B << "=" << A - B << endl;
	}
	else if (choice == 3) //Multiply
	{
		thirdChoice(A, B);
		cout << A << "*" << B << "=" << A * B << endl;
	}
	else if (choice == 4) //Divide
	{
		fourthChoice(A, B);
		cout << A << "/" << B << "=" << A / B << endl;
	}
	return 0;
}

