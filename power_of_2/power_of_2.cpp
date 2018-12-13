// Determining if a value is a power of 2
// Exercise is from goal kicker c++ book

#include <iostream>
using namespace std;

int main()
{
  int digit;
  cout << "Input a number \n";
  cin >> digit;
  cout << "You chose: " << digit << "\n";
  bool power_of_two = digit && !(digit & (digit - 1));

  if(power_of_two == 0){
    cout << digit << " is not a power of two. \n";
  } else {
    cout << digit << " is a power of two. \n";
  }
}
