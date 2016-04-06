// Program to check if number is even or odd and multiple of 5 or multiple of 10
 
#include<iostream>
#include<iomanip>
 
using namespace std;
int main()
{
    int number;		 //holds number
	              
    cout<<setprecision(2)<<fixed;
    
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment #10 " <<endl<<endl<<endl<<endl;
    
    cout<< "Enter a number from 1-100?    ";
    cin>>number;
     
    if(number>=1 && number<=100)
     if(number>1&& number<=50)
	  if(number%2==0)	
		cout<<number<<" is between 1 and 50 and is EVEN.";
	  else 
	    cout<<number<<" is between 1 and 50 and is ODD.";
			
	 else if(number%10==0)
     cout<<number<<" is between 1 and 50 and is A MULTIPLE OF 10.";
     
	      else
           cout<<number<<" is between 1 and 50 and is NOT A MULTIPLE OF 10.";      
	else
	 cout<<"Invalid number-please re-run program with a valid number.";
	 
	cout<<""<<endl<<endl;
	cout<< "End of Program"<<endl;
   
 }
 
// End of program

