#include <iostream>
#include <vector>
using namespace std;



int main() {

    vector<int> v;

    for (int i = 0; i < 5; i++) {
        int num;
        cout << "Enter " << i+1 << " element: ";
        cin >> num;
        v.push_back(num); 
    }

    cout << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }


    return 0;
}