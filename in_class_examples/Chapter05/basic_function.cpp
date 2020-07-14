#include <iostream>
#include <string>

using namespace std;

void printName(const string &name) {
  name = "No Name";
  cout << "Name: " << name << endl;
}

int main() {
  string temp;
  getline(cin, temp);

  printName(temp);

	return 0;
}