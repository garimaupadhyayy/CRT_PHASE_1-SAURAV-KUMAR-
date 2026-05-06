#include<iostream>
using namespace std;

class Student{
  public:
  string name;
  int rollno;

  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
  }
};

int main()
{
  Student s1;
  s1.name = "Garima";
  s1.rollno = 1128;
  s1.display();
  return 0;
}