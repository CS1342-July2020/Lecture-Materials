// C++ code to demonstrate 2D vector 
#include <iostream> 
#include <vector> // for 2D vector 
using namespace std; 
  
int main() 
{ 
    // Initializing 2D vector "vect" with 
    // values 
    vector<vector<int>> table1;
    vector<vector<int>> table2;
    
    // Display the 2D vector 
    for (int row = 0; row < vect.size(); row++) {
        auto vector_row = vect.at(row);
        for (int col = 0; col < vector_row.size(); col++) {
            auto item = vector_row.at(col);
            cout << item << ",";
        }
        cout << endl;
    }

    for (auto row: vect) {
        for (auto col: row) {
            cout << col << " ";
        }
        cout << endl;
    }
  
    return 0; 
} 