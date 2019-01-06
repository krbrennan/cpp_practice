#include <iostream>

using namespace std;

int main()
{
  char to_convert;

  int f = 0;
  int c = 0;


  int converted_f = 0;
  int converted_c = 0;

  do {
    cout << "Will you provide a Fahrenehit or Celcius temperature? \n"
         << "Please enter either \'F\' or \'C\' \n";
    cin >> to_convert;
  } while(to_convert != 'C' && to_convert != 'F');

  if(to_convert == 'F' || to_convert == 'f'){
    cout << "What Fahrenheit temperature would you like to convert? \n";
    cin >> f;
  } else if(to_convert == 'C' || to_convert == 'c'){
    cout << "What Celcius temperature would you like to convert? \n";
    cin >> c;
  }
  converted_f = ((f - 32) * 0.5556);
  converted_c = ((c * 1.8) + 32);


  if(to_convert == 'F'){
    cout << f << " degrees Fahrenehit is: \n";
    cout << converted_f << " degrees Celcius \n";
  } else {
    cout << c << " degrees Celcius is: \n"
         << converted_c << " degrees Fahrenehit";
  }

}
