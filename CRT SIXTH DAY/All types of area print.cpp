#include<iostream>
using namespace std;

class Area{

public:

double side;
double length;
double width;
float radius;
double area;

Area()
{
  side = 4.567;
  area = side*side;
}

Area(double s)
{
  side = s;
  area = s*s;
}

Area(double l, double w)
{
  length = l;
  width = w;
  area = l*w;
}

Area(float r)
{
  radius = r;
  area = 3.14*r*r;
}

void display()
{
  cout<<"Area is: "<<area<<endl;
}
};

int main()
{
  Area a1;
  a1.display();

  Area a2(5.0);
  a2.display();

  Area a3(4.0,5.0);
  a3.display();

  Area a4(3.0);
  a4.display();

  return 0;
}