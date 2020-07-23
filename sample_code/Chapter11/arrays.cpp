#include <iostream>

using namespace std;

int main() {
    const int size = 3;
    int *array = new int[size] { 1, 2, 3 };

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }



    return 0;
}