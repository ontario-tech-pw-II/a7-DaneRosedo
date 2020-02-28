#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance )
{
	// your code
  interestrate = rate;
}

double SavingsAccount::calculateInterest() {
	// your code
  double interest = getBalance() * interestrate;
  return interest

}
void SavingsAccount::display(ostream & os) const
{
	// your code
  os <<
}
