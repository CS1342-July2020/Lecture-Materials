#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> myVector);
void reverse(vector<int> &myVector);

int main() {
  vector<int> myVector = { 1, 2, 3, 4, 5, 6, 7 }; 

  printVector(myVector);
  reverse(myVector);
  printVector(myVector);

  return 0;
}

void reverse(vector<int> &myVector) {
  // Implement Reverse
  for (int i = 0; i < myVector.size() / 2; i++) {
    int temp = myVector.at(i);
    myVector.at(i) = myVector.at(myVector.size() - 1 - i);
    myVector.at(myVector.size() - 1 - i) = temp;
  }
}

void printVector(vector<int> myVector) {
  cout << "-- MyVector --" << endl;
  for (int i = 0; i < myVector.size(); i++) {
     cout << myVector.at(i) << "  ";
  }
  cout << endl << endl;
}