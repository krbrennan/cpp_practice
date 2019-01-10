#include <iostream>
#include <vector>

using namespace std;

int fib_calculator(int num)
{
  if(num <= 1) {
    return num;
  } else {
    return fib_calculator(num - 1) + fib_calculator(num - 2);
  }
}

int main() {
  int number;
  int solution;

  string td_th;

  cout << "\n======================\n"
       << "Welcome to the pedantic fibonacci calculator..."
       << "Enter a number to calculate the nth fib number\n\n";
  cin >> number;


    if(number == 1){
      td_th = "st";
    } else if(number == 2){
      td_th = "nd";
    } else if(number == 3){
      td_th = "rd";
    } else if(number >= 4){
      td_th = "th";
    }

  solution = fib_calculator(number);

  cout << "===============\n\n"
       << "The " << number << td_th << " fib number is: \n"
       << solution << "\n\n===============";

  return 0;
}
