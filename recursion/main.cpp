#include <iostream>

int recursionSum(int num) {
    if (num == 1) {
        return 1; 
    }   
    else {
        return num + recursionSum(num-1);
    }
}


int main() {

    std::cout << recursionSum(5);

    return 0;
}