#include <iostream>

using namespace std;

void doubleNum(int *num)
{
    *num *= 2;
}

int main()
{

    int x = 5;

    doubleNum(&x);

    cout << x << endl;

    return 0;
}