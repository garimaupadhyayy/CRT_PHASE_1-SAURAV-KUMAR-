#include<iostream>

using namespace std;

namespace Virat
{
  void show()
  {
    cout<<"he is part of rcb"<<endl;
  }
};

namespace Rohit
{
  void show()
  {
    cout<<"he is part of mi"<<endl;
  }
};

int main()
{
 Virat :: show();
 Rohit :: show();
 return 0;
}