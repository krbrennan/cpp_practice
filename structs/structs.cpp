#include <iostream>
#include <string>

using namespace std;


struct car
{
  string company;
  string model;
  string color;
  int year;
  int cost;

};


int main()
{

  string company;
  string model;
  string color;
  int year;
  float cost;


  cout << "What company made your first car? \n";
  cin >> company;
  cout << "What was the model of your first car? \n";
  cin >> model;
  cout << "What was the color of your first car? \n";
  cin >> color;
  cout << "What year was your car made? \n";
  cin >> year;
  cout << "How much did your first car cost? \n";
  cin >> cost;

  car newCar;

  newCar.company = company;
  newCar.model = model;
  newCar.color = color;
  newCar.year = year;
  newCar.cost = cost;

  cout << "\n \n";

  cout << "Company: " << newCar.company << "\n"
  << "Model: " << newCar.model << "\n"
  << "Color: " << newCar.color << "\n"
  << "Year: " << newCar.year << "\n"
  << "Cost: " << newCar.cost << "\n";
}
