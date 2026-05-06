#include<iostream>
using namespace std;

class Student{

  private:
  int reg = 100;

  public:
  string name;
  int rollno;

  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"Registration: "<<reg<<endl;
    reg++;
  }
};

int main()
{
  Student s1;
  s1.name = "Madhu";
  s1.rollno = 1129;
  s1.display();

  Student s2;
  s2.name = "shgshdd";
  s2.rollno = 11277; 
  s2.display();
  return 0;
}