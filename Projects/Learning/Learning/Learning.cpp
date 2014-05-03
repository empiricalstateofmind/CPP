// Learning.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// First application
int HelloWorld(int a)
{
	cout << "Hello World! \n";
	cout << "I'm a C++ program \n";
	cout << "The number you entered is " << a << "\n";

	return 1;
}

// Function with parameters
int  addition(int a, int b)
{
	return a + b;
}

// Function without a type
void PrintStuff(void)
{
	cout << "I'm a function \n";
}

// The use of & makes the actual variable be used, rather than its value
// this means that any changes made in the function change the variable outside the function
void duplicate(int& a, int& b, int& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

// concatenating strings
string concatenate (const string& a, const string& b)
{
	return a + b;
}

// input and logical operators
void InputLogic(void)
{
	int i;
	do {
		cout << "Please, enter number (0 to exit): ";
		cin >> i;
		if ((i % 2) != 0) cout << "It is odd.\n";
		else cout << "It is even.\n";
	} while (i != 0);
}

//Recursive
long factorial(long a)
{
	if (a > 1)
		return (a * factorial(a - 1));
	else
		return 1;
}

//Function overloading
int operate(int a, int b)
{
	return (a*b);
}

double operate(double a, double b)
{
	return (a / b);
}

// Template class for summing different variable types. Called through sum<int>(i,j), sum<double>(f,g)
template <class T>
T sum(T a, T b)
{
	T result;
	result = a + b;
	return result;
}

template <class T, class U>
bool are_equal(T a, U b)
{
	return (a == b);
}
// are_equal(10,10.0)
// are_equal<int, double>(10, 10.0) - equivalent!

// Variables are only in their namespace scope
namespace myNamespace
{
	int a, b;
}
//myNamespace::a
//myNamespace::b
//using myNamespace::a - makes a available for normal use


// Main
int _tmain(int argc, _TCHAR* argv[])
{
	//HelloWorld (1);
	//cout << addition(5, 3);
	//PrintStuff();
	
	//string x = concatenate("Hello ", "World");
	//std::cout << x << endl;
	
	//InputLogic();

	system("pause");
	return 0;
}

