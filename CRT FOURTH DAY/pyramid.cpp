#include <iostream>
using namespace std;

int main()
{ 
  int r;
  cin>>r;
  for(int i = 1; i<=r; i++)
  {
    for(int j = 1; j<=r-i; j++)
    {
      cout<< " ";
    }
      for(int k = 1; k<=i; k++)
      {
        cout<<"*";
      }
      for(int g = i-1; g>=1; g--)
      {
        cout<<"*";
          }
     cout<<endl;
        }
  return 0;
}