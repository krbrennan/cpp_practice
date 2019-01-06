#include <iostream>
#include <string>

using namespace std;

// The purpose of this exercise is to handle
// unexpected input correctly
// If a user inputs anything other than an int for age, weight, height
// Then the program should re-prompt the user until correct results
// are collected.


int main()
{
  string name;
  int age = 0;
  int weight = 0;
  double height = 0;

  cout << "What is your name, age, weight, and height? \n"
       << "Please input information separated by spaces. \n";
  do
  {
    cin >> name >> age >> weight >> height;
  } while (height == 0);



  // cin.clear();
  // cin.ignore(200,'\n');

  cout << "\n" << name << "\n" << age << "\n" << weight << "\n" << height << endl;
  return 0;
}
