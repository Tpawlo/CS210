#pragma once
#ifndef BANKING_H
#define BANKING_H
#include <string>
#include <iostream>
using namespace std;



/*This is the header file for my Banking program. This file will be used in the Main.cpp and Banking.cpp files to call 
variables and functions. It includes both private and public functions and variables*/

class Banking {
	//These are the public variables and functions

	public:
		double yebWithOutAmd(double t_initialAmount, int t_numberOfYears, double t_interest);

		double yebWithAmd(double t_intialAmount, double t_monthlyDepositedAmount, int t_numberOfYears, double t_interest);

		int GetNumberOfYears();
		void SetNumberOfYears(int years);
		double GetInitialAmount();
		void SetInitialAmount(double startingAmount);
		double GetMonthlyDepositedAmount();
		void SetMonthlyDepositedAmount(double monthlyAmount);
		double GetInterest();
		void SetInterest(double interestRate);

		//These are the private variables. m_ represents private data per the Airgead Banking Standards
	private:
		int m_numberOfYears;
		double m_initialAmount;
		double m_monthlyDepositedAmount;
		double m_interest;
		double m_yearEndBalance;


};

#endif 
