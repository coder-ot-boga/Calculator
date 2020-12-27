#include <iostream>
using namespace std;

int main()
{ 

	int first_num;
	int two_num;
	string x1 = "/";
	string x2 = "*";
	string x3 = "+";
	string x4 = "-";
	string x12 = "";
  
	cout << "Hello, choose what you need '/' '*' '+' '-' : ";
	cin >> x12;
	if (x1 == x12)
	{
		cout << "Hello you have chosen: '/' \n";
		cout << "The meaning of the first number: ";
		cin >> first_num;
		cout << "The meaning of the second number: ";
		cin >> two_num;
		cout << "Counting... " << first_num / two_num << " ! This is the answer";
	}
	else if (x2 == x12)
	{
		cout << "Hello you have chosen: '*' ";
		cout << "The meaning of the first number: ";
		cin >> first_num;
		cout << "The meaning of the second number: ";
		cin >> two_num;
		cout << "Counting... " << first_num * two_num << " ! This is the answer";
	}
	else if (x3 == x12)
	{
		cout << "Hello you have chosen: '+' ";
		cout << "The meaning of the first number: ";
		cin >> first_num;
		cout << "The meaning of the second number: ";
		cin >> two_num;
		cout << "Counting... " << first_num + two_num << " ! This is the answer";
	}
	else if (x4 == x12)
	{
		cout << "Hello you have chosen: '-' ";
		cout << "The meaning of the first number: ";
		cin >> first_num;
		cout << "The meaning of the second number: ";
		cin >> two_num;
		cout << "Counting... " << first_num + two_num << " ! This is the answer";
	}

}
