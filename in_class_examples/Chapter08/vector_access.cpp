#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> myVector(5);
  
   myVector.at(0) = 122; 
   myVector.at(1) = 119; 
   myVector.at(2) = 117; 
   myVector.at(3) = 117; 
   myVector.at(4) = 116; 

   // for (int i = 0; i < myVector.size(); i++) {
   //    cout << myVector.at(i) << endl;
   // }

   // range-based loop
   for (auto &number: myVector) {
      number *= 2;
      cout << number << endl;
   }


   for (auto number: myVector) {
      cout << number << endl;
   }


   return 0;
}