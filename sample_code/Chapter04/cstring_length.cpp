#include <iostream>
#include <cstring>

using namespace std;

// This function returns the length of a string
int stringLength(char word[]) {
    // while char != \0
    // increase count
    int count = 0;
    // iterate until reaching the null character
    while (word[count] != '\0') {
        count += 2;
    }

    return count;
}

int main() {
    // Creating new cstring
    char word[] = "hello";

    cout << word << endl;

    cout << stringLength(word) << endl;


    // TODO: need to compare string

    return 0;
}