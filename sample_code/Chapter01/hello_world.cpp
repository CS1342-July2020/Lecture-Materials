#include <iostream>

int main() {
    int hoursPerClass = 3;
    int numOfClasses;
    int numOfHours;

    std::cout << "How many classes are you taking?:";
    std::cin >> numOfClasses;

    numOfHours = numOfClasses * hoursPerClass;
    std::cout << "You are enrolled in " << numOfHours << std::endl;

    int x, y, z;

    return 0;
}