// examples of the functions peek and putback

// --peek - looks at the input stream and returns the next character
// but does not remove the character. Checks the identity of the
// next character
// --results should be stored in a variable.
// --ex:
//    ch = istreamVar.peek();


//--putback--lets you put the last character extracted from the
// input stream by the 'get' function back into the input stream


#include <iostream>

using namespace std;

int main()
{
  char ch;

  cout << "(line1) Enter a string: \n";
  cin.get(ch);
  cout << endl;

  cout << "(line4) After first cin.get(ch);"
  << "ch = " << ch << endl;

  cin.get(ch);
  cout << "(line6) After second cin.get(ch);"
  << "ch = " << ch << endl;

  cin.putback(ch);
  cin.get(ch);
  cout << "(line9) After putback and then "
       << "cin.get(ch); ch = " << ch << endl;

  ch = cin.peek();
    cout << "(line11) After cin.peek(); ch = "
         << ch << endl;
  return 0;
}
