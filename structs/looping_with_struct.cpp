// Reading from a file:
// 1. Include the header file fstream in the program
// 2. Declare file stream variables
// 3. Associate the file stream variables with the input/output sources
// 4. Use the file stream variables with >>, <<, or other input/output functions
// 5. Close the files


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


struct person
{
  string firstName;
  string lastName;
  int age;
  string occupation;
};


int main()
{
  string fname;
  string lname;
  int age;
  string occupation;

  // step 2 requires your to declare file stream variables
  // ifstream inData;

  cout << "OK lets start creating a nonsense list of people"
      << "What is this person's first name? \n";
  cin >> fname;

  cout << "What is this person's last name? \n";
  cin >> lname;

  cout << "How old is this person? \n";
  cin >> age;

  cout << "What is their occupation? \n";
  cin >> occupation;

  person newPerson;

  newPerson.firstName = fname;
  newPerson.lastName = lname;
  newPerson.age = age;
  newPerson.occupation = occupation;

  ofstream outData;

  // inData.open("./names.txt");

  // outData.open("./namesList.txt");

  cout << newPerson;

  // outData << newPerson;


  return 0;

}
