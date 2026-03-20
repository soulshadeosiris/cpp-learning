#include <iostream>
using namespace std;

int sum(int* arr, int size) {

    int result = 0;

    for (int i = 0; i < size; i++) {
        result+=arr[i];
    }

    return result;
}

int main() {
    int array[5] = {1, 2 , 3, 4, 5};

    int* p = array;

    cout << "Sum of array is " << sum(p, 5);

    return 0;
}