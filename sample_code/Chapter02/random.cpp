#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime> // time

using namespace std;

int main() {
    srand(time(NULL));
    int r = (rand() % 3) + 5;
    cout << "Random Number: " << r << endl;

    return 0;
}