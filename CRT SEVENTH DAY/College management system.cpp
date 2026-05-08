#include<iostream>
using namespace std;

class Person
{
  public:

  string name;
  int age;

  virtual void category()
  {
    cout<<"Part of college"<<endl;
  }
};

class Students : public Person
{
  public:
  string name;
  int age;
  string course;
  int rollno;

  void category()
  {
    cout<<"Student category"<<endl;
  }
};


class Teachers : public Person
{
  public:
  string name;
  int age;
  string department;
  int employee_id;

  void category()
  {
    cout<<"Teacher category"<<endl;
  }

};

int main()
{
  Students s1;
  s1.name = "Garima";
  s1.age = 18;
  s1.course= "CSE";
  s1.rollno = 1128;

  cout<<"Student name: "<<s1.name<<endl;
  cout<<"Age: "<<s1.age<<endl;
  cout<<"Course: "<<s1.course<<endl;
  cout<<"Roll no: "<<s1.rollno<<endl;

  cout<<endl;

  s1.category();

  cout<<endl;

  Teachers t1;
  t1.name = "Ankita";
  t1.age = 29;
  t1.department = "cse";
  t1.employee_id = 1234;
  

  cout<<"Teacher name: "<<t1.name<<endl;
  cout<<"Age: "<<t1.age<<endl;
  cout<<"Department: "<<t1.department<<endl;
  cout<<"Employee id "<<t1.employee_id<<endl;

  cout<<endl;

  t1.category();

  return 0;

}