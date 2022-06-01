#include "CreditDossier.h"

CreditDossier::CreditDossier()
{
}

void CreditDossier::setPerson(Person sample)
{
	person = sample;
}

void CreditDossier::setLoan(BankLoan sample)
{
	loan.push_back(sample);
	num++;
}

void CreditDossier::getLoanByName()
{
	size_t SIZE = loan.size();
	BankLoan temp();
	for (auto i = 0; i < SIZE; i++)
	{
		for (auto j = 0; j < SIZE - i; j++)
		{
			if (loan[j].getLoanName() > loan[j+1].getLoanName())
			{
				temp = loan[j];
				loan[j] = loan[j + 1];
				loan[j + 1] = temp;
			}
		}
	}

	std::cout << "Name: " << person.getName() << " ";
	std::cout << this->num + 1 << " Loans" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name\t" << "Sum\t" << "Amount" << std::endl;
	for (auto i = 0; i < num; i++)
	{
		std::cout << loan[i].getLoanName() << "\t" << loan[i].getLoanSum() << "\t" << loan[i].getLoanAmount() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
}

void CreditDossier::getLoanBySumm() 
{
	std::cout << "Name: " << person.getName() << " ";
	std::cout << this->num + 1 << " Loans" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name\t" << "Sum\t" << "Amount" << std::endl;
	for (auto i = 0; i < num; i++)
	{
		std::cout << loan[i].getLoanName() << "\t" << loan[i].getLoanSum() << "\t" << loan[i].getLoanAmount() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
}

void CreditDossier::getLoanByRepaymentAmount()
{
	std::cout << "Name: " << person.getName() << " ";
	std::cout << this->num + 1 << " Loans" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name\t" << "Sum\t" << "Amount" << std::endl;
	for (auto i = 0; i < num; i++)
	{
		std::cout << loan[i].getLoanName() << "\t" << loan[i].getLoanSum() << "\t" << loan[i].getLoanAmount() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "\n";
}

void CreditDossier::getRepaymentSchedule()
{
	std::cout << "Name: " << person.getName() << " ";
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Name\t" << "Amount\t" << "Decryption of payment" << std::endl;
	size_t buf = 0;
	size_t date = 1;
	float overpayment = 0;
	while (buf != loan.size())
	{
		for (auto i = 0; i < loan[buf].getMonth(); i++)
		{
			std::cout << date << "\t" << loan[buf].getLoanAmount() << "\t" << loan[buf].getLoanName() << std::endl;
			date++;
		}
		overpayment += loan[buf].getLoanSum() * ((loan[buf].getLoanPercent()/12) / 100);
		buf++;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Overpayments : ";
	std::cout << overpayment;
	std::cout << "\n";
}
