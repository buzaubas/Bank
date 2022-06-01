#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "BankLoan.h"

class CreditDossier : Person, BankLoan
{
	Person person;
	std::vector<BankLoan> loan;
	size_t num = 0;
public:
	CreditDossier();
	void setPerson(Person sample);
	void setLoan(BankLoan sample);
	void getLoanByName();
	void getLoanBySumm();
	void getLoanByRepaymentAmount();
	void getRepaymentSchedule();
};

