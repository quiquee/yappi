//* A simple program that demonstrates C++ string library features *

#include<iostream>
#include<string>
using namespace std;

int main() {
  unsigned age;
  string   name;

  cout << "Hi! How old are you? ";
  cin >> age;

  /* read one word only
    cout << "What's your name? ";
    cin >> name;
  */

  cout << "What's your name? ";
  cin.ignore(256, '\n');
  // cin.ignore is necessary each time we switch
  // from cin >> ... to getline(cin,...)
  // to read the reminder of the previous line
  // i.e. between the typoed age and ENTER key
  getline(cin,name);
  // VC++ 6.0 or earlier - see getline library fix

  if (name.empty()) {
    cout << "It is not nice to be always anonymous!" << endl;
    return(0);
  }
    
  name[0]=toupper(name[0]);
  if (name=="Aleksander")
    cout << "Welcome master programmer" << endl;
  else {
    if (name.size()>=10) 
      cout << "Boy! " << name << " is a very long name! Welcome." << endl;
    else
      cout << "Welcome " << name << ". It's nice to meet you." << endl;
  }

  if (age<5) {
    cout << "Aren't you too young to spend time in front of a computer?" << endl;
    cout << "Anyway, you must be very smart as you can read and type!" << endl;
  }

  return(0);
}

