#include <iostream>
 
using namespace std;
 
class Line {
  public: 
  double length;
  double width;  
};
 
// Main function for the program
int main() {
  Line line; // initialize object
  line.length = 100;
  line.width = 100;
  
  cout << line.length << endl;
   
  return 0;
}