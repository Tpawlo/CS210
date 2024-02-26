#include <iostream>
#include <iomanip>
using namespace std;

#include "Banking.h"


/*This file uses the Banking header file to define the set and get functions for the variables needed in the program. These will
be used in the mainMenu function when asking the user for input information*/

void Banking::SetNumberOfYears(int years) {
	m_numberOfYears = years;
}

int Banking::GetNumberOfYears() {
	return m_numberOfYears;
}


void Banking::SetInitialAmount(double startingAmount) {
	m_initialAmount = startingAmount;
}

double Banking::GetInitialAmount() {
	return m_initialAmount;
}


void Banking::SetMonthlyDepositedAmount(double monthlyAmount) {
	m_monthlyDepositedAmount = monthlyAmount;
}

double Banking::GetMonthlyDepositedAmount() {
	return m_monthlyDepositedAmount;
}


void Banking::SetInterest(double interestRate) {
	m_interest = interestRate;
}

double Banking::GetInterest() {
	return m_interest;
}




