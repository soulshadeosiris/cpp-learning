#include <iostream>

int factorial(int num) {

    if (num == 0) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

int main() {

    std::cout << factorial(4);

    return 0;
}