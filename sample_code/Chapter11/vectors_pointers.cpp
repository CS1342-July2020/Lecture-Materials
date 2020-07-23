#include <iostream>
#include <vector>
#include <string>

using namespace std;

// EMPLOYEE CLASS
struct Employee {
    int id;
    string name;
};

// COMPANY CLASS
class Company {
public:
    vector<Employee *> employees;

    Company();
};

Company::Company(): employees(0) {

}

int main() {

    return 0;
}