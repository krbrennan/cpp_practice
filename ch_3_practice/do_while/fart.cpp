#include <iostream>
#include <string>

using namespace std;

void work(const string word)
{

  cout << "\n ================================ \n";
  cout << "\n \n OK so I'm finally going to demonstrate .get, .putback, and .get \n \n";

  word.get(1);

  cout << word;

}
