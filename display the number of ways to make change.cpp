// Program to display the number of ways to make change for a dollar using nickles, dimes, quarters and fifty-cent pieces.

#include<iostream>
#include<iomanip>
 
using namespace std;
int main()
{
    double	nickels,
			dimes,
			quarters,
			halfDollars,				
			count=0;
									// Value for inner loop
									// Value for outer loop
	
	
	cout<<setprecision(2)<<fixed;   // Outputs only upto 2 places                                   
    
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment #16" <<endl<<endl<<endl<<endl;
    
   	cout<<"Nickels   Dimes   Quarters   Fifty-cents"<<endl; // Header
    for(nickles=0; nickels<=20; nickels=nickles+1))                                                           
   	 for(dimes=0; dimes<=10; dimes=dimes+1)
   	  for(quarters=0; quarters<=4; quarters=quarters+1)
   	   for(halfDollars=0; halfDollars<=2; halfDollars=halfDollars+1)
 		{totalAmt=nickles*0.05+dimes*0.10+quarters*0.25+halfDollars*0.50)
 		if(totalAmt==1.00)
		 {cout<<nickels<<"    "<<dimes<<"    "<<quarters<<"    "<<halfDollars<<endl;
 		count=count+1
		}
	}
    
	 	cout<<endl;

    

 }
 cout<<""<<endl<<endl;
 cout<<"End of Program"<<endl;
}

 
// End of program

