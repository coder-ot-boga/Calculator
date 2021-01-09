#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string name;
	int a, b, select;
	cout << "What is your name: ";
	cin >> name;
	cout << "Input here two number: ";
	cin >> a >> b;
	cout << "Welcome " << name << " \n\tChoose an option: \n\t1. Multiplication(*)\n\t2. Division(/)\n\t3. Amount(+)\n\t4. Taking away(-) !\n";
	cin >> select;
	switch (select)
	{
	case 1: 
	{
		cout << a * b << " -Result!\n";
		break;
	}
	case 2:
	{
		cout << a / b << " -Result!\n";
		break;
	}
	case 3:
	{
		cout << a + b << " -Result!\n";
		break;
	}
	case 4:
	{
		cout << a - b << " -Result!\n";
		break;
	}
	}
	return 0;
}
