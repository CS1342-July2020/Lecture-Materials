#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;
    string lastName;

    cout << "Please Enter Full Name: " << endl;

    // Be careful using combinations of cin and getline
    cin >> firstName;
    getline(cin, lastName);

    cout << "Hello " << firstName << " " << lastName << endl;

    return 0;
}