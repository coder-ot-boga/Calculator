#include <iostream>
using namespace std;

int main()
{
    int a = 0, x = 0, y = 0, c;
    do {
        cout << "1. Multiplication(*) \n2. Division(/) \n3. Taking away(-) \n4. Amount(+) \n5. Remainder of the division \n6. Floating point numbers\n Please enter number (1-6): ";
        cin >> a;
        switch (a)
        {
        case 1: {
            cout << "Enter the value of the first number: \n";
            cin >> x;
            cout << "Enter the value of the second number: \n";
            cin >> y;
            cout << "Result = " << x * y << " !\n";
            break;
        }
        case 2:
        {
            cout << "Enter the value of the first number: \n";
            cin >> x;
            cout << "Enter the value of the second number: \n";
            cin >> y;
            cout << "Result = " << x / y << " !\n";
            break;
        }
        case 3:
        {
            cout << "Enter the value of the first number: \n";
            cin >> x;
            cout << "Enter the value of the second number: \n";
            cin >> y;
            cout << "Result = " << x - y << " !\n";
            break;
        }
        case 4:
        {
            cout << "Enter the value of the first number: \n";
            cin >> x;
            cout << "Enter the value of the second number: \n";
            cin >> y;
            cout << "Result = " << x + y << " !\n";
            break;
        }
        case 5:
        {
            cout << "Enter the value of the first number: \n";
            cin >> x;
            cout << "Enter the value of the second number: \n";
            cin >> y;
            cout << "Result = " << x % y << " !\n";
            break;
        }
        case 6: {
            link :
            double d = 0.0, s = 0.0;
            int f = 0;
            if (a == 6) {
                cout << "Your choose option from \'Floating point numbers\' \nPlease enter the option you want to make\n";
                cout << "1. Multiplication(*) \n2. Division(/) \n3. Taking away(-) \n4. Amount(+): ";
                cin >> f;
                if (f != 1 && f != 2 && f != 3 && f != 4) {
                    cout << "Error! There is no such option. Try again\n";
                    goto link;
                }
                cout << "Enter the value of the first number:";
                cin >> d;
                cout << "Enter the value of the first number:";
                cin >> s;
                if (f == 1) 
                {
                    cout << "Result = " << d * s << " !\n";
                }
                else if(f == 2)
                {
                    cout << "Result = " << d / s << " !\n";
                }
                else if (f == 3)
                {
                    cout << "Result = " << d - s << " !\n";
                }
                else if (f == 4)
                {
                    cout << "Result = " << d + s << " !\n";
                }

            }
        }

        }
        cout << "Need to continue? \n Press 1 and repeat your calculations \n Press 2 to exit the program: ";
        cin >> c;
    } while (c == 1);
    return 0;
}
