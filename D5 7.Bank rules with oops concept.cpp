#include <iostream>
using namespace std;

class icici
{
public:

   float minimumInterestRate = 4;
   double mnimumBalanceAllowed = 500;
   double maximumWithdrawl = 50000;
};

int main()
{
   icici obj;
   float rate;
   double withdrawl;
   double balance;

   cout << "Enter interest rate \n";

   cin >> rate;
   if (obj.minimumInterestRate <= rate)
   {
       cout << "Eligible under icici rules\n";
   }
   else
   {
       cout << "Not elligible under icici rules\n";
   }
   cout << "Enter withdrawl \n";
   cin >> withdrawl;
   if (obj.maximumWithdrawl >= withdrawl)
   {
       cout << "Eligible under icici rules\n";
   }
   else
   {
       cout << "Not elligible under icici rules\n";
   }

   cout << "Enter minimum balance\n";
   cin >> balance;

   if (obj.mnimumBalanceAllowed <= balance)
   {
       cout << "Eligible under icici rules\n";
   }
   else
   {
       cout << "Not elligible under icici rules\n";
   }

   cin.get();
   cin.get();


   return 0;
}
