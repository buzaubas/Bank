#include "BankLoan.h"

BankLoan::BankLoan(const char* name, float sum, size_t month, size_t percent)
{
	this->name = name;
	this->sum = sum;
	this->month = month;
	this->percent = percent;
}

void BankLoan::getLoanRepaymentSchedule(BankLoan sample)
{
	std::cout << "Loan name: ";
	std::cout << sample.name << std::endl;
	std::cout << "Loan sum: ";
	std::cout << sample.sum << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Months" << "\t" << "Amount" << std::endl;
	double i = sample.percent / 12;
	float K = ((i / 12) * pow((1 + i), sample.month)) / (pow((1 + i), sample.month) - 1);
	float A = K * sample.sum;
	for (auto j = 0; j < sample.month; j++)
	{
		std::cout << j << "\t";
		std::cout << A << "\n";
	}
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Overpayments : ";
	std::cout << sample.sum * (i / 100) << std::endl;
	std::cout << "\n";
}

BankLoan::BankLoan()
{
}

std::string BankLoan::getLoanName()
{
	return this->name;
}

float BankLoan::getLoanSum()
{
	return this->sum;
}

float BankLoan::getLoanAmount()
{
	double i = this->percent / 12;
	float K = ((i / 12) * pow((1 + i), this->month)) / (pow((1 + i), this->month) - 1);
	return K * this->sum;
}

size_t BankLoan::getMonth()
{
	return this->month;
}

size_t BankLoan::getLoanPercent()
{
	return this->percent;
}

void BankLoan::operator=(const BankLoan& obj)
{
	this->name = obj.name;
	this->month = obj.month;
	this->sum = obj.sum;
	this->percent = this->percent;
}
