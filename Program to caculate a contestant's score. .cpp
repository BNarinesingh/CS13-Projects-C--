//  Program to caculate a contestant's score. 
 
#include<iostream>
#include<iomanip>
#include<cmath>  

bool checkPerfect(int x);
void displayFactors(int x);
int total=0;

using namespace std;
int main()
{                                                         
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment Extra #2" <<endl<<endl<<endl<<endl;
   
int num, x;
char again;

do{
cout<<"Enter an integer and I will check and display all the perfect integers up to that number. What is your number ? ";
cin>>num;  
cout<<"The perfect numbers up to "<<num<<" are: "<<endl;

for(x=1; x<=num; x++){
if (checkPerfect(x))
displayFactors(x);
}
cout<<""<<endl;
cout<<"Would you like to try another number? (y/n) ";
cin>>again;
total=0;						// total is global variable zeroed out to use again fresh

cout<<""<<endl<<endl;
}while(again=='y'||again=='Y');  // Exits program if anything other than yes 


cout<< "End of Program"<<endl<<endl;
 }




// End of main program 
// Start of Functions 

bool checkPerfect(int x){

int i;

for(i=1;i<x;i++)    //finds all the factors of x starting at 1
 if(x%i==0)		   
  total=total+i;



if(x==total)		//if x and its factors add up to be the same, it is true
 {total=0;
 return true;}
else
 {total=0;
 return false;}
}
 

void displayFactors(int x){			// only if the checkPerfect function is true does the function below work
int z, zsum;
cout<<x<<" = ";
for(z=1;z<x;z++)    
 if(x%z==0)		  
  {zsum=zsum+z;
	cout<<" + "<<z;}
	cout<<endl;
 

}

// End of functions
