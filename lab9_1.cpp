#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	int EndOfYear=1;	
	double PrevBalance,interest,Total,payment,NewBalance;
	double loan,rate,amount;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	PrevBalance = loan;

	while( NewBalance != 0){

	cout << setw(13) << left << EndOfYear; 
	EndOfYear++;
	cout << setw(13) << left << PrevBalance;
	interest = PrevBalance*(rate/100.00);
	cout << setw(13) << left << interest;
	Total = PrevBalance + interest;
	cout << setw(13) << left << Total;
	if(Total < payment){
		payment = Total;
	}
	cout << setw(13) << left << payment;
	NewBalance = Total - payment;
	cout << setw(13) << left << NewBalance;
	PrevBalance = NewBalance ;
	cout << "\n";

	}
	
	return 0;
}
