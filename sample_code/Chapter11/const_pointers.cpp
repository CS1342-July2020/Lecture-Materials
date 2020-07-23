#include <iostream>

using namespace std;

int main() {
    // non-const pointer to non-const value
    int val1 = 10;
    int * ptr1 = &val1;

    ptr1++;
    *ptr1 = 100;

    // non-const pointer to const value
    int val2 = 10;
    const int * ptr2 = &val2;

    *ptr2 = 10;
    ptr2++;

    // const pointer to non-const value
    int val3 = 100;
    int * const ptr3 = &val3;

    ptr3++;
    *ptr3 = 10;

    // const pointer to const value
    int val4 = 10;
    const int * const ptr4 = &val4;

    ptr4++;
    *ptr4 = 5;

    // const val

    return 0;
}