#include <iostream>

using namespace std;

void fib_calculator(int& num)
{

  if(num > 1)
  {
    fib_calculator( num += (num - 1))
  } else { return 1; }

}

int main()
{
  int number = 5;

  fib_calculator(number);

  cout >> number;
}
