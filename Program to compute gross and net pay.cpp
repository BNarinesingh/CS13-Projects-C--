// Program to compute gross and net pay

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
 	const double statetaxrate= 0.0825;
 	const double fedtaxrate=   0.175 ;
 	double hours, rate, grosspay, netpay, statetaxamt, fedtaxamt;
 	
	cout<<setprecision(2)<<fixed;
 	
 	cout<< "My name is Barindra Narinesingh"<<endl;
 	cout<< "Assignment #3 " <<endl<<endl<<endl<<endl;
 	
 	cout<< "What is the number of hours worked? "; 
	cin>>hours;
	cout<< "What is the pay rate?              $"; 
	cin>>rate;
	
	grosspay= hours*rate;
	statetaxamt= grosspay*statetaxrate;
	fedtaxamt= grosspay*fedtaxrate;
	
	netpay= grosspay-statetaxamt-fedtaxamt;
	
	cout<<""<<endl;
 	cout<< "The gross pay is:         $" <<grosspay<<endl;
	cout<< "The net pay is:           $" <<netpay<<endl;
	cout<< "Amount of state tax is:   $" <<statetaxamt<<endl;
	cout<< "Amount of federal tax is: $" <<fedtaxamt<<endl<<endl;

	cout<< "End of Program"<<endl; 
 	
 } 

 // End of program

//My name is Barindra Narinesingh
//Assignment #3



//What is the number of hours worked? 35
//What is the pay rate?              $20.50

//The gross pay is:         $717.50
//The net pay is:           $532.74
//Amount of state tax is:   $59.19
//Amount of federal tax is: $125.56

//End of Program

//--------------------------------
//Process exited with return value 0
//Press any key to continue . . .
