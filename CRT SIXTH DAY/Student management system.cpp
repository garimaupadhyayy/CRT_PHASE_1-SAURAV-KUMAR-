#include<iostream>
using namespace std;

class Studentsystem
{
  public:
  string name;
  int rollno;
  string regno;
  string email;
  long long phone;
  float marks;
  char grade;

  Studentsystem()
  {
     name = "Unknown";
      rollno = 0;
      regno = "Not Assigned";
      email = "default@gmail.com";
      phone = 0000000000;
      marks = 0;
      grade = 'F';
  }

  Studentsystem(string n, int r, string reg,
            string e, long long p,
            float m, char g)
    {
      name = n;
        rollno = r;
        regno = reg;
        email = e;
        phone = p;
        marks = m;
        grade = g;

    }

    void display()
    {
      cout<<"Name: "<<name<<endl;
      cout<<"Roll No: "<<rollno<<endl;
      cout<<"Registration No: "<<regno<<endl;
      cout<<"Email ID: "<<email<<endl;
      cout<<"Phone No: "<<phone<<endl;
      cout<<"Marks: "<<marks<<endl;
      cout<<"Grade: "<<grade<<endl;
    }
  };

  int main()
  {
    Studentsystem s1;
    cout<<"default called"<<endl;
    s1.display();

    Studentsystem s2("Garima", 1128, "REG2026", "garima@gmail.com", 9876543210, 91.3, 'A');
    cout<<"details"<<endl;
    s2.display();
    return 0;
  }
