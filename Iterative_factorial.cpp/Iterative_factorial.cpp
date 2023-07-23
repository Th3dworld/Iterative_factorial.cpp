//This program implements an iterative factorial function
#include <iostream>
using namespace std;

unsigned long long factorial(int);

//Driver program
int main() {
	//Declare Variables
	int numbr;

	//Get user input 
	cout << "Please input value up to 33:";
	cin >> numbr;

	if (numbr > 33) {
		cout << "!ERROR! Please input a number less than 33:";
		cin >> numbr;
	}

	cout << "The factorial of " << numbr << " is " << factorial(numbr);

	cout << "\n\n\n\n";
	

	return 0;
}

/*
* This program takes an iterative approach on the factorial function
*/
unsigned long long factorial(int num) {
	//Declare variable to hold factorial
	int fact = 1;
	int temp = num;
	//iterate until factorial is reduced to 1
	while (temp > 1) {
		fact *= temp;
		temp--;
	}

	return fact;
}