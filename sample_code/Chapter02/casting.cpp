#include <iostream>

using namespace std;

int main() {
    int numPlayers = 10;
    int totalScore = 23;
    int avg = numPlayers / totalScore;
    cout << avg << endl;

    auto avg_decimal = ((double)numPlayers / (double)totalScore);
    cout << avg_decimal << endl;

    return 0;
}