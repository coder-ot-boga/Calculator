#include <iostream>
using namespace std;

int main()
{
  int a = 0, x = 0, y = 0, c;
  setlocale(LC_ALL, "rus");
  do {
    cout << "\t\n1. Multiplication 2. Division 3. Taking away 4. Amount ";
    cin >> a;
    switch (a)
    {
    case 1: {
      cout << "Enter the value of the first number: \n";
      cin >> x;
      cout << "Enter the value of the second number: \n";
      cin >> y;
      cout << "Ответ = " << x * y << " !\n";
      break;
    }
    case 2:
    {
      cout << "Enter the value of the first number: \n";
      cin >> x;
      cout << "Enter the value of the second number: \n";
      cin >> y;
      cout << "Ответ = " << x / y << " !\n";
      break;
    }
    case 3:
    {
      cout << "Enter the value of the first number: \n";
      cin >> x;
      cout << "Enter the value of the second number: \n";
      cin >> y;
      cout << "Ответ = " << x - y << " !\n";
      break;
    }
    case 4:
    {
      cout << "Enter the value of the first number: \n";
      cin >> x;
      cout << "Enter the value of the second number: \n";
      cin >> y;
      cout << "Ответ = " << x + y << " !\n";
      break;
    }

    }
    cout << "Need to continue? \ n Press 1 and repeat your calculations \ n Press 2 to exit the program:\n ";
    cin >> c;
  } while (c == 1);
  return 0;
}
