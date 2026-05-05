#include<iostream>
using namespace std;

int add(int a, int b=1)
{
  return a + b;
}

int main()
{
  int ans = add(5,12);
  int result = add(5);
  cout<<ans<<" ";
  cout<<result;

  return 0;
}