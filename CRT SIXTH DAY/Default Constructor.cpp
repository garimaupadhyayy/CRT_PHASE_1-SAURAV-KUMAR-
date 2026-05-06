#include<iostream>
using namespace std;

class Student
{
public:
string name;
int age;

Student()
{
  name ="Garima";
  age = 1128;
}

void display()
{
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}
};

int main()
{
  Student s1;
  s1.display();

  return 0;
}