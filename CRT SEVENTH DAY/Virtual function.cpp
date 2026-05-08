#include<iostream>
using namespace std;

class Student
{
  public:

  virtual void show()
  {
    cout<<"Dog barks"<<endl;
  }

};

class Cricketers : public Student
{
  public:

  void show()
  {
    cout<<"child class"<<endl;
  }
};


int main()
{
  Cricketers c1;
  c1.show();
  return 0;
}