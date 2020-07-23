#include <iostream>
#include <string>

using namespace std;

class Profile {
public:
  // getters
  string getName();
  string getUsername();
  int getId();
  // setters
  void setName(string name);
  void setUsername(string newUsername);
  void setId(int newId);

  void display();

  // Constructors
  Profile(); // default
  Profile(int newId);// overloaded
  Profile(int id, string name, string username);

  // Destructor
  ~Profile();

  Profile(const Profile &);
  Profile& operator=(const Profile &);

private: 
  string name;
  string username;
  int *id;
};

string Profile::getName() {
  return name;
}

string Profile::getUsername() {
  return username;
}

int Profile::getId() {
  return *id;
}

void Profile::setName(string name) {
  this->name = name;
}

void Profile::setUsername(string username) {
  this->username = username;
}

void Profile::setId(int newId) {
  *id = newId;
}

Profile::Profile(int id, string name, string username) {
  cout << "Overloaded Constructor -- Profile(int, string, string)" << endl;
  this->id = new int(id);
  this->name = name;
  this->username = username;
}

void Profile::display() {
  cout << "Profile: " << *id << endl;
  cout << "name: " << name << endl;
  cout << "username: " << username << endl;
}

Profile::Profile(): name{""}, username{""} {
  cout << "Default Constructor  " << endl;
  this->id = new int(0);
}

Profile::Profile(int newId): id{new int(newId)} {
  cout << "Overloaded Constructor -- Profile(int)" << endl;
}

Profile::~Profile() {
  cout << "Destructor was called" << endl;
  delete id;
}

Profile::Profile(const Profile & copy) {
  cout << "Copy Constructor" << endl;

  id = new int;
  *id = *(copy.id);
  name = copy.name;
  username = copy.username;
}

Profile& Profile::operator=(const Profile & copy) {
  cout << "Copy Assignment Operator" << endl;

  if (this != &copy) {
    delete id;

    id = new int;
    *id = *(copy.id);
    name = copy.name;
    username = copy.username;
  }

  return *this;
}

void changeObject(Profile p) { // copy constructor gets implicitly called here
  p.display();
} // destructor for p
 
int main(int argv, char * argc[]) {
  cout << "Argv: " << argv << endl;

  for (int i = 0; i < argv; i++) {
    cout << argc[i] << endl;
  }  

  Profile profile1 = Profile(1, "George", "george");
  Profile profile2 = Profile(2, "Elroy", "elroy"); 

  profile1 = profile2; // copy assignment operator

  profile1.display();
  Profile profile3 = Profile(profile1); // copy constructor
  profile3.setId(5);

  profile1.display();

  return 0;
} // Destructor for profile 1 & 2