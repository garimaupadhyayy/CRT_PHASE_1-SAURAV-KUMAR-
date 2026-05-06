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
  age = 20;
}

Student(string n, int a)
  {
    name = n;
    age = a;
  }

Student(Student &obj)
{
  name = obj.name;
  age = obj.age;
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
  Student s2("Garima", 20);
  s2.display();
  Student s3=s2;
  s3.display();
  return 0;

}