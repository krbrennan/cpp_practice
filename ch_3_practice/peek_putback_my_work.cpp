#include <iostream>
// #include <string>
using namespace std;

int main()
{
  string word;
  int iterator = 0;

  cout << "Give me a four-letter word: \n \n";

  cin >> word;

  cout << "\n" << "Next to each letter you'll find the index value for that letter \n";

  // cout << word.length();---------- WORKS

  while(iterator < word.length()){
    cout << iterator << ": " << word[iterator] << "\n";
    ++iterator;
  }




  // cin.get(ch);
  //
  // cout << "Getting first character: \n" << ch << endl;
  //
  //
  // cin.get(ch);
  // cout << "Next letter is: \n";
  // cout << ch << "\n";
  //
  // cin.get(ch);
  // cout << "The third letter is: \n";
  // cout << ch << "\n";
}
