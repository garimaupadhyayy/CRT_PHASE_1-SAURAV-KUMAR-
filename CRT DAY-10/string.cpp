#include<iostream>
#include<string>


using namespace std;

int main()
{
  string str1= "Hello";
  string str2 = "JECRC";

  cout<<str1<<" "<<str2<<endl;

  //methods of string

  //length of string

  int n = str1.length();
  cout<<"Length of string is: "<<n<<endl;

  //append string

  cout<<"After appending string is: "<<str1.append(" Students")<<endl;

  //empty string

  cout<<"Is string empty: "<<str2.empty()<<endl;

  //concatenation fo string

  cout<<"After concatenation of string is: "<<str1 + "bcho"<<endl;

  cout<<"After concatenation of string 2 is: "<<str1<<endl;

  //push back method

  str2.push_back(' U');
  cout<<"After push_back() method: "<<str2<<endl;//jecrcu

  //pop back method

  str2.pop_back();
  cout<<"After pop_back() method: "<<str2<<endl;//jecrc

  //find method

  int index = str1.find("ello");
  cout<<"Index of 'ello in str1: "<<index<<endl;

  //at method
  char ch = str1.at(1);
  cout<<"Character at index 1 in str1: "<<ch<<endl;

  //swap method

  str1.swap(str2);
  cout<<"After swapping str1 and str2: "<<endl;
  cout<<"str1: "<<str1<<endl;
  cout<<"str2: "<<str2<<endl;

  //substr method

  string subStr = str2.substr(5,6); //5 is index and 6 is total length starting from 1
  cout<<"Substring is: "<<subStr<<endl;

  //getline() method

  string str3;

  //cin>>str3;
  getline(cin, str3);
  cout<<"You entered: "<<str3<<endl;

  return 0;
}