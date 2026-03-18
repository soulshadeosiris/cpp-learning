#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{

    string name;
    int age;

    cout << "Enter your name \nYou: ";

    getline(cin, name);

    while (true)
    {
        cout << "Enter your age \nYou: ";

        cin >> age;

        if (cin.fail() || cin.peek() != '\n')
        {
            cout << "Invalid input";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            cout << "Hello, " << name << "!" << endl;
            cout << "You are " << age << " years old" << endl;
            break;
        }
    }

    return 0;
}