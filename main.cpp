#include <iostream>
using namespace std;

int main()
{
  int a = 0, x = 0, y = 0, c;
  setlocale(LC_ALL, "rus");
  do {
    setlocale(LC_ALL, "rus");
    cout << "\t\n1. Умножение 2. Деление 3. Отрицание 4. Сумма ";
    cin >> a;
    switch (a)
    {
    case 1: {
      cout << "Введите значение первого числа: \n";
      cin >> x;
      cout << "Введите значение второго числа: \n";
      cin >> y;
      cout << "Ответ = " << x * y << " !\n";
      break;
    }
    case 2:
    {
      cout << "Введите значение первого числа: \n";
      cin >> x;
      cout << "Введите значение второго числа: \n";
      cin >> y;
      cout << "Ответ = " << x / y << " !\n";
      break;
    }
    case 3:
    {
      cout << "Введите значение первого числа: \n";
      cin >> x;
      cout << "Введите значение второго числа: \n";
      cin >> y;
      cout << "Ответ = " << x - y << " !\n";
      break;
    }
    case 4:
    {
      cout << "Введите значение первого числа: \n";
      cin >> x;
      cout << "Введите значение второго числа: \n";
      cin >> y;
      cout << "Ответ = " << x + y << " !\n";
      break;
    }

    }
    cout << "Нужно продолжить? \nНажмите 1 и повторите свои расчеты\nНажмите 2 для выхода из программы:\n ";
    cin >> c;
  } while (c == 1);
  return 0;
}
