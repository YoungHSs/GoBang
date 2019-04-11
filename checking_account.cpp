#include<iostream>
#include"checking_account.h"
using namespace std;

checking::checking(double balance, double fee)
	:account(balance)
{
	if (fee > 0)
		transaction_fee = fee;
	else
	{
		transaction_fee = 0;
		cout << "Invalid input, transaction fee should be greater than 0" << endl;
	}
}
void checking::checking_credit(double checking_credit)
{
	if (checking_credit >= 0)
	{
		if (credit(checking_credit))
			debit(transaction_fee);
	}
	else
		cout << "Invalid input, credit should be greater or equal than 0." << endl;
}

void checking::checking_debit(double checking_debit)
{
	if(checking_debit<get_Balance())
	{
		if (checking_debit >= 0)
	{
		if (debit(checking_debit + transaction_fee) == false)
			cout << "Balance is not enough for transaction fee." << endl;
	}
	}
	else
		cout << "Invalid inpuy, debit exceeds balance." << endl;
}
