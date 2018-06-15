// Geometry Calculator
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// creating a varible for choice 
int choice;
// creating a switch and prints out the options the calculator can do
cout << "Geometry calculator";
cout << endl;
cout << "1. Calculate the Area of a Circle";
cout << endl;
cout << "2. Calculate the Area of a Rectangle";
cout << endl;
cout << "3. Calculate the Area of a Triangle";
cout << endl;
cout << "4. Quit";
cout << endl;
cout << "Enter your choice (1-4): ";
cin >> choice;
//choice corresponds what the person wants
switch(choice)
{
//calculates area of circle
case 1:
double r;
cout << "What is the radius of the circle? ";
cin >> r;
cout << fixed << showpoint << setprecision(2) << "The area of the circle is " << 3.14159 * (r * r);
break;

//calculates area of rectangle
case 2:
double l;
double w;
cout << "What is the length of the rectangle? ";
cin >> l;
cout << "What is the width of the rectangle? ";
cin >> w;
cout << fixed << showpoint << setprecision(2) << "The area of the rectangle is " << l * w;
break;

//calculates area of triangle
case 3:
double b;
double h;
cout << "What is the base of the triangle? ";
cin >> b;
cout << "What is the height of the triangle? ";
cin >> h;
cout << fixed << showpoint << setprecision(2) << "The area of the triangle is " << (b * h)/2;
break;

//Prints out good bye
case 4:
cout << "Good bye!";
break;

//prints out invalid input
default:
cout << "Invalid input. Please rerun the program.";
break;
}
return 0;
}
