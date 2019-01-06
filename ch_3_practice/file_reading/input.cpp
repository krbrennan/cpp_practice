#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  // This prog will copy the contents of one file and
  // write them to another.

  ifstream src("text.txt", std::ios::binary);
  ofstream dst("destination", std::ios::binary);
  dst << src.rdbuf();

}
