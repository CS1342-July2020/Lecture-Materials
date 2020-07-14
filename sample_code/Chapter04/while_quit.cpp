#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int data[20];
    int data2[20] = { 1, 2, 3, 4, 5 }; // partial initialization
    int data3[4] = { 4, 3, 2, 1}; // fully initialized
    int data4[] = { 3, 2, 1 };

    const int size = 10; // preferred
    int data5[size];

    const int valuesSize = 6;
    int values[valuesSize] = { 20, 49, 100, 3, 5, 25 };

    int maximumIndex = 0;
    int maximum = 0;
    for (int i = 0; i < valuesSize; i++) {
        if (values[i] > maximum) {
            maximumIndex = i;
            maximum = values[i];
        }
    }

    cout << "Maximum: " << maximum << endl;

    const int capacity = 6;
    char word[capacity] = "hello";

    return 0;
}