// This was made to figure out how helper functions work.
// Had to figure out how to call a helper function (or subprocess)


#include <iostream>

using namespace std;

// This subprocess below needs to exist prior to when it's called.
// It's clearly above "main" which is the main function called
// when the compiled code is run.

// This works if this function is called void, not sure why yet.

void helper_function(int numb)
{
  cout << "\n...Inside helper function...\n";
  cout << "The number I was passed was: " << numb << "\n";
  cout << "...Exiting helper function...\n\n";

}

//
//
//

int main()
{
  int num = 0;

  cout << "Enter number \n";
  cin >> num;
  helper_function(num);
}
