#include <iostream>
using namespace std;

int main()
{
    const double applePrice = 0.50;
    const double breadPrice = 1.20;
    const double milkPrice = 0.90;

    int quantityOfApples = 0, quantityOfBreads = 0, quantityOfMilk = 0;

    cout << "Enter quantity of apples: ";
    cin >> quantityOfApples;

    cout << "Enter quantity of breads: ";
    cin >> quantityOfBreads;

    cout << "Enter quantity of milk: ";
    cin >> quantityOfMilk;

    double totalPrice = (applePrice * quantityOfApples) + (breadPrice * quantityOfBreads) + (milkPrice * quantityOfMilk);

    cout << "Apples: " << quantityOfApples << " x " << applePrice << " = " << quantityOfApples * applePrice << endl;
    cout << "Bread: " << quantityOfBreads << " x " << breadPrice << " = " << quantityOfBreads * breadPrice << endl;
    cout << "Milk: " << quantityOfMilk << " x " << milkPrice << " = " << quantityOfMilk * milkPrice << endl;
    cout << "Total: " << totalPrice << endl;

    if (totalPrice > 5.00)
    {
        double priceWithDiscount = totalPrice - (totalPrice * 0.15);
        cout << "Discount: " << totalPrice * 0.15 << endl;
        cout << "Final: " << priceWithDiscount << endl;
    }
    else
    {
        cout << "Discount: 0.00" << endl;
        cout << "Final: " << totalPrice << endl;
    }

    return 0;
}