// Program that asks for integer input and searches
// a list to check if the supplied int
// is present in the array

#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;
const int ARRAY_SIZE = 11;


struct listType
{
  int listElem[ARRAY_SIZE];
};


int searchFunction(const listType& list, int searchItem)
{
  // loop through the list
  // check if each value matches the searchItem
  // If it does, return the postion of the element in the array
  // If it isn't in the list, return 'false' or something
  bool found = false;

  for(int i = 0; i < ARRAY_SIZE; i++)
    if(list.listElem[i] == searchItem)
    {
      found = true;
      break;
    }
    if(found == true){
      cout << "Yes, that number is for sure in my ridiculously secret list\n";
    } else {
      cout << "Sorry that number is not in my rediculously secret list\n";
    }
  return 0;
}

// This main function is included because my compiler made me
// It works out though because I like to separate my concerns
int main()
{
  int valueToSearch = 0;

  cout << "\n Enter a number to search for in the list:\n";
  cin >> valueToSearch;

  listType list = {1,2,3,4,5,6,7,8,9,10,42};

  searchFunction(list, valueToSearch);
}
