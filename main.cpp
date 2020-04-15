//Jennifer Jimenez
//Calculating the area of instances of the triangle class
//Dr_T 

#include <iostream>
using namespace std;

//class definitions
class Triangle
{
  private: 
    double base;
    double height;

  public:
    void setBase(double);
    void setHeight(double);
    double getBase() const;
    double getHeight() const;
    double getArea() const;
};
   //setting the base of the triangle
   void Triangle::setBase(double b)
    {
      base = b;
    }
   //setting the height of the triangle
   void Triangle::setHeight(double h)
    {
      height = h;
    }
   //returns the base of the triangle
   double Triangle::getBase() const
    {
      return base;
    }
   //returns the height of the triangle
   double Triangle::getHeight() const
     {
       return height;
     }
   //returns and calculates the area of the triangle
   double Triangle::getArea() const
   {
     return ((base * height) / 2);
   }

int main() 
 {
   //Declaration and Initialization of variables & different instances of three triangles
   double number;
   double totalArea;
   Triangle t1;
   Triangle t2;
   Triangle t3;
   // accepting input from the user for the base & height of triangle 1
   cout << "\nWhat is the base of the first triangle?\t";
   cin >> number;
   t1.setBase(number);

   cout << "What is the height of the first triangle?\t";
   cin >> number;
   t1.setHeight(number);
   //output the area of triangle 1
   cout << "A triangle with a base of " << t1.getBase() << " and a height of " << t1.getHeight() << " will have an area of " << t1.getArea() << "." << endl;
     
   //accepting input from the user for the base and height of triangle 2
   cout << "\nWhat is he base of the second triangle?\t";
   cin >> number;
   t2.setBase(number);

   cout << "What is the height of the second triangle?\t";
   cin >> number;
   t2.setHeight(number);
   //output the area of triangle 2
   cout << "A triangle with a base of " << t2.getBase() << " and a height of " << t2.getHeight() << " will have an area of " << t2.getArea() << "." << endl;

   //accepting input from the user for the base and height of triangle 3
   cout << "\nWhat is the base of the third triangle?\t";
   cin >> number;
   t3.setBase(number);
   cout << "What is the height of the third triangle?\t";
   cin >> number;
   t3.setHeight(number);
   //output the area of triangle 3
   cout << "A triangle with a base of " << t3.getBase() << " and a height of " << t3.getHeight() << " will have an area of " << t3.getArea() << "." << endl;

   //Total area of the three triangles
   totalArea = t1.getArea() + t2.getArea() + t3.getArea();

   //Output the total area to the user
   cout << "\nThe total area of the three triangles is " << totalArea << endl;   





 return 0;
 }