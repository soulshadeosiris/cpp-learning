#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    unordered_map<string, int> hashMap;

    hashMap["Alice"] = 25;
    hashMap["Bob"] = 30;
    hashMap["Charlie"] = 22;

    cout << hashMap["Alice"] << endl;
    cout << hashMap.count("Bob");

    return 0;
}