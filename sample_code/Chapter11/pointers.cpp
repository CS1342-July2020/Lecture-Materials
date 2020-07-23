#include <iostream>

using namespace std;

int* createPtr() {
    int value = 10;
    int *ptr = &value;

    return ptr;
}


int main() {
    int *ptr = createPtr();

    cout << *ptr << endl;

    return 0;
}