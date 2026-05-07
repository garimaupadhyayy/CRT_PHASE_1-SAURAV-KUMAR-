#include<iostream>
using namespace std;

class Player
{
  public:
  
  virtual void show() = 0; //pure virtual function
};

class Cricketers: public Player{
  public:
  int a;
  //implementation needed for pure virtual function
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