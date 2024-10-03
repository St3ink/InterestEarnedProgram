/*
Title: Chp. 3 Exc. 18 - Earned Interest
File Name: InteresetEarned.cpp
Programmer: Kason Steiner
Date: 10/2024
Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as:
Amount = Principal x (1+ (Rate/T)^T) 
Principal is the balance in the savings account, Rate is the interest rate, and T is the number of times the interest is compounded during a year (T is 4 if the interest is compounded quarterly). Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() { 

//variables
double rate, timesCompounded, interest, totalAmount, principal;

cout << "Enter the principal amount: ";
cin >> principal;
cout << "Enter the interest rate as a decimal: ";
cin >> rate;
cout << "Enter the number of times the interest is compounded: ";
cin >> timesCompounded;

//calculations of total amount in account after compound, then then interest earned.
totalAmount = principal * pow(1 + rate/timesCompounded, timesCompounded);  
interest = totalAmount - principal;

//displaying results
cout << setprecision(2) << fixed;
cout << left << setw(19) << "Interest Rate: " << right << setw(8) << (rate * 100) << "%\n";
cout << setprecision(0) << fixed;
cout << left << setw(19) << "Times Compounded: " << right <<  setw(9) << timesCompounded << endl;
cout << setprecision(2) << fixed;
cout << left << setw(19) << "Principal: " << "$" << right << setw(8) << principal << endl;
cout << left << setw(19) << "Interest Amount: " << "$" << right <<  setw(8) <<  interest << endl;
cout << left << setw(19) << "Amount in Savings: " << "$" << right << setw(8) <<  totalAmount << endl;

  
return 0;
}