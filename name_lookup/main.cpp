// This program asks the user for a rick and morty character name (first name)
// Then it looks through names.dat for the name
// If the name is found it returns with the name
// If the name isn't found then it prompts for another user

// The program will continue to prompt the user until it finds a match

// TODO: handle edge-cases
//    If user inputs "Mr.", returns all characters with fname == Mr.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


void nameSearch(string& fname, string& lname, string& fullName, bool& found)
{

  ifstream inFile("names.dat");

  for(string line; getline(inFile, line);)
  {
    string firstName = line.substr(0, line.find(' '));     // looks at first name from idx 0 -> space

    if(firstName == fname)
    {
      fullName = line;
      found = true;
      break;
    }
  }
}

// ========================================================== //
// ========================================================== //
// ========================================================== //


void queryUser(bool& doneQuery)
{
  bool found = false;

  string fname;
  string lname;

  string fullName;

  cout << "\nEnter the first name of a Rick and Morty character\n\n";
  cin >> fname;
  fname[0] = toupper(fname[0]);

  nameSearch(fname, lname, fullName, found);

  if(found == true)
  {
    cout << "\n==================="
         << "\nWe found a match:\n\n"
         << fullName
         << "\n===================\n";
    doneQuery = true;
  } else
  {
    cout << "\n-------------------"
         << "\nWe couldn't find a match :[\n"
         << "-------------------\n";
  }
}

// ========================================================== //
// ========================================================== //
// ========================================================== //


int main()
{
  bool doneQuery = false;

  do {
    queryUser(doneQuery);
  } while(doneQuery == false);

  cout << "\n\n~~~~Have a great day!~~~~\n\n";
}
