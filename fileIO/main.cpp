#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile;   // Input file stream

    inputFile.open("../myfile.csv");

    int line = 0;
    string row; //COLUMN 1,COLUMN 2,COLUMN 3
    while (getline(inputFile, row)) {
        //
    }

    cout << "Closing file myfile.csv." << endl;

    // Done with file, so close it
    inputFile.close();

    return 0;
}