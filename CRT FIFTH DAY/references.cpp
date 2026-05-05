#include<iostream>
using namespace std;

int main()
{
int a = 5;
int &ref  = a;
ref =10;
cout<<a<<endl;
return 0;
}