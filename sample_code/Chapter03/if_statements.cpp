#include <iostream>
#include <string>

using namespace std;

int main() {
    enum State { Not_Started = 3, Started = 5, Finished };

    int num;
    num = Not_Started;

    switch (num) {
        case Not_Started:
            cout << "You are not started..";
            num = Started;
        case Started:
            num = Finished;
        case Finished:
            cout << "Complete";
    }



    return 0;
}