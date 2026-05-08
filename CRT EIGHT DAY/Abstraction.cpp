#include<iostream>
using namespace std;

class ATM
{
  private:
  int balance;

  public:
  ATM(int balance)
  {
    this->balance = balance;
  }
  void Withdraw(int amount)
  {
    if ( amount> balance)
    {
      cout<<"Insufficient balance"<<endl;
    }

    else{
      balance = balance - amount;
      cout<<"Amount withdraw: "<<amount<<endl;
    }
  }

  void ShowBalance()
  {
    cout<<"Current Balance: "<<balance<<endl;
  }
};

int main()
{
  ATM a(5000);
  a.ShowBalance();
  a.Withdraw(500);
  a.ShowBalance();
  return 0;
}