#pragma once
#include <iostream>
#include <string>
#include <cmath>

class BankLoan
{
	std::string name;
	float sum;
	size_t month;
	size_t percent;

public:
	BankLoan();
	BankLoan(const char* name, float sum, size_t month, size_t percent);
	static void getLoanRepaymentSchedule(BankLoan sample);
	std::string getLoanName();
	float getLoanSum();
	float getLoanAmount();
	size_t getMonth();
	size_t getLoanPercent();
	void operator=(const BankLoan& obj);
};

