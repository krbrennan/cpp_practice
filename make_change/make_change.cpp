#include <iostream>
using namespace std;

int main()
{
  int cents = 0;
  int half_dollars = 0;
  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;

  int current_cents = 0;

  cout << "What is the total amount of change? \n";
  cin >> cents;
  cout << cents << " cents? I'll make change for your real quick...\n";

// set number of half_dollars equal to cents divided by 50
// then subtract the number of half_dollars from cents to get the updated cents
  half_dollars = cents / 50;
  cents %= 50;

  quarters = cents / 25;
  cents %= 25;

  dimes = cents / 10;
  cents %= 10;

  nickels = cents / 5;
  cents %= 5;

  pennies = cents / 1;
  cents %= 1;

  cout << "Here! You get back: \n"
      << half_dollars << " half-dollars, \n"
      <<  quarters << " quarters, \n"
      << dimes << " dimes, \n"
      << nickels << " nickels, \n"
      << "and " << pennies << " pennies! \n";

}
