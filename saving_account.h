#pragma once
#ifndef saving_account
#define saving_account

#include"Account.h"
class saving : public account
{
public:
	explicit saving(double,double);
	double calculateInterest();


private:
	double interest_rate;//in persentage
};
#endif // !saving_account
