#include<iostream>
using namespace std;

class Player
{
  public:

  //by default
  virtual void show()
  {
    cout<<"Player class show function."<<endl;
  }
};

class Cricketers: public Player{
  public:
  int a;
  //user defined
  void show()
  {
    cout<<"Cricketer class show function"<<endl;
  }
};

int main()
{
  Cricketers c1;
  c1.show();

  return 0;
}