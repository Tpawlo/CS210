//These are libraries and headers I will need for this program
#include <iostream>
#include <string>
#include <iomanip>
#include "Banking.h"
using namespace std;


// t_ represents a function parameter, per the Airgead Banking Standards



/*This function allows me to repeat a character, c, a  certain, n, amount of times*/
string nCharString(size_t n, char c) {
	string newString;
	newString.append(n, c);
	return newString;
}




/*This function calculuates the year end balance without additional monthly deposits. It takes in the user input
from the main menu and uses the formulas to calculate the total amount of money the user will have and the interest
they earned each year. Since this calculates the investment when no monthly deposits are made, the monthlyDepositedAmount
variable is not a parameter or used in this function*/

double Banking::yebWithOutAmd(double t_initialAmount, int t_numberOfYears, double t_interest) {
	double yearEndBalance = t_initialAmount;
	cout << "Balance And Interest Without Additional Monthly Deposits" << endl;
	cout << "____________________________________________________________________" << endl;
	cout << "     Year         Year End Balance         Year End Earned Interest     " << endl;
	cout << "--------------------------------------------------------------------" << endl;
	int i;
	for (i = 0; i < t_numberOfYears; i++) {
	double interestRate = yearEndBalance * (t_interest / 100.00);
	yearEndBalance = yearEndBalance + interestRate;
	cout << nCharString(3, ' ') << (i + 1) << nCharString(20, ' ') << fixed << setprecision(2) << yearEndBalance << nCharString(20, ' ') << interestRate << endl;
	}
	return yearEndBalance;
	cout << endl;
	cout << endl;
	cout << endl;
}



/*This function calculates the year end balance with additional monthly balances. It takes in information
from the user, such as the initial deposited amount, the monthly deposited amount, how many years it
will be invested upon, and the interest to find the year end balance when deposits are made every month
and the interest made from those monthly deposits and the initial deposit.*/

double Banking::yebWithAmd(double t_intialAmount, double t_monthlyDepositedAmount, int t_numberOfYears, double t_interest) {
	double yearEndBalance = t_intialAmount;
	cout << endl;
	cout << endl;
	cout << "Balance And Interest With Additional Monthly Deposits" << endl;
	cout << "____________________________________________________________________" << endl;
	cout << "     Year         Year End Balance         Year End Earned Interest     " << endl;
	cout << "--------------------------------------------------------------------" << endl;
	int i;
	for (i = 0; i < t_numberOfYears; i++) {
		double yearEndInterest = 0;
		int j;
		for (j = 0; j < 12; j++) {
			double interestRate = (yearEndBalance + t_monthlyDepositedAmount) * ((t_interest / 100.00) / 12.00);
			yearEndBalance = yearEndBalance + t_monthlyDepositedAmount + interestRate;
			yearEndInterest = yearEndInterest + interestRate;
		}

		cout << nCharString(3, ' ') << (i + 1) << nCharString(20, ' ') << fixed << setprecision(2) << yearEndBalance << nCharString(20, ' ') << yearEndInterest << endl;
		
	}
	return yearEndBalance;
}

/*This creates an object of the Banking class called userInvestment, which the program uses to make calculations based on the 
user's information*/

Banking userInvestment;

/*This is the main menu function. This outputs the main menu for the user to see what they are supposed to do. It also checks to 
make sure the user is entering valid data. It checks that the information is above 0, because a negative number of years, intiial
deposit, interest, or monthly deposit amount wouldn't make sense. If this happens, it should result in an error message. In addition,
it also gives the user the option to quit the program*/

void mainMenu() {
	int numberOfYears;
	double initialAmount;
	double interest;
	double depositedAmount;
	string input;

	
		cout << nCharString(37, '*') << endl;
		cout << "**********" << " Data Input " << "************" << endl;
		cout << "Initial Investment Amount" << endl;
		cin >> initialAmount;
		while (initialAmount < 0) {
			cout << "Please enter a valid, positive number: ";
			cin >> initialAmount;
		}
		userInvestment.SetInitialAmount(initialAmount);
		cout << "Monthly Deposit:" << endl;
		cin >> depositedAmount;
		while (depositedAmount < 0) {
			cout << "Please enter a valid, positive number: ";
			cin >> depositedAmount;
		}
		userInvestment.SetMonthlyDepositedAmount(depositedAmount);
		cout << "Annual Interest:" << endl;
		cin >> interest;
		while (interest < 0) {
			cout << "Please enter a valid, positive number: ";
			cin >> interest;
		}
		userInvestment.SetInterest(interest);
		cout << "Number of years:" << endl;
		cin >> numberOfYears;
		while (numberOfYears <= 0) {
			cout << "Please enter a valid, positive number: ";
			cin >> numberOfYears;
		}
		userInvestment.SetNumberOfYears(numberOfYears);
		cout << "Press 'quit' to end. Otherwise, press any key:  ";
		cin >> input;

		if (input == "quit") {
			cout << "Goodbye!";
			exit;
		}

}


/*This is the main function that calls all the other functions. First, it calls the mainMenu function so the user can see what
the program is about and prompt them to answer questions. Then, it sends that information to the userInvestment object and 
calls the yebWithoutAmd and yebWithAmd function with the user inputted data as paramaeters. After this, those functions calculate
the data for the user*/

int main() {
	double startingAmount;
	double monthlyDeposited;
	double Interest;
	int years;
	string userInput = ".";
	mainMenu();
	if (userInput != "quit") {
		userInvestment.yebWithOutAmd(userInvestment.GetInitialAmount(), userInvestment.GetNumberOfYears(), userInvestment.GetInterest());

		userInvestment.yebWithAmd(userInvestment.GetInitialAmount(), userInvestment.GetMonthlyDepositedAmount(), userInvestment.GetNumberOfYears(), userInvestment.GetInterest());
	}
}
