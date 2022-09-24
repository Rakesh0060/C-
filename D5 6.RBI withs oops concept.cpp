#include <iostream>
using namespace std;
class RBI
{
public:
   float minimumInterestRate = 4;
   double mnimumBalanceAllowed = 1000;
   double maximumWithdrawl = 100000;
};
int main()
{
   RBI obj;
   float rate;
   double withdrawl;
   double balance;
   cout << "Enter interest rate you required . We will infrom you are eligible or not \n";
   cin >> rate;
   if (4 <= rate)
   {
       cout << "Eligible under RBI rules. You are eligible for loans\n";
   }
   else
   {
       cout << "Not elligible under RBI rules. You are allowed to take intrest above 4\n";
   }
   cout << "Enter withdrawl amount . We will infrom you are allowed or not \n";
   cin >> withdrawl;
   if (obj.maximumWithdrawl >= withdrawl)
   {
       cout << "Eligible under RBI rules. You can withdraw amount . Enter the pin\n";
   }
   else
   {
       cout << "Not elligible under RBI rules. Your withdrawal limit is upto 100000 only\n";
   }
   cout << "Enter minimum balance you can maintain . we will infrom you you can open account or not\n";
   cin >> balance;
   if (obj.mnimumBalanceAllowed <= balance)
   {
       cout << "Eligible under RBI rules. You can open account\n";
   }
   else
   {
       cout << "Not elligible under RBI rules. You have to maintain min of 1000\n";
   }
   cin.get();
   cin.get();
   return 0;
}
