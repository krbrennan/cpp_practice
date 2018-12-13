#include <iostream>
#include "./include_own_function.cpp"

using namespace std;

int main()
{
  string word;

  do
  {
    cout << "Enter a four-letter word such as 'fire' or 'anus' \n \n";
    cin >> word;
  } while (word.length() != 4);

  work(word);

  return 0;
}
