//  Program to find if a number is prime or not
 
#include<iostream>
#include<iomanip>  
bool isPrime(int z); //changed z from aNumber to refer it to the loop

using namespace std;
int main()
{                                                         
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Extra Credit #3" <<endl<<endl<<endl<<endl;

int aNumber,z;

//cout<<"What is your integer? ";
//cin>>aNumber;

cout<<"Primes from 2 to 100 are: "<<endl;

for(z=2;z<=100;z=z+1){
if(isPrime(z)==true)
cout<<z<<" ";
}

cout<<" "<<endl<<endl;
cout<< "End of Program"<<endl<<endl;

}


// End of main program 
// Start of Functions 

bool isPrime(int z){
	
int x, factors=0;

for(x=2;x<z; x=x+1){
 if(z%x==0){
  factors=factors+1;
  break;}
}
if(z==1)
//cout<<aNumber<<	" is not a prime number"<<endl;
return false;

else
{if(factors==0 || z==2)
//cout<<aNumber<<" is a prime number"<<endl;
return true;

else
//cout<<aNumber<<	" is not a prime number"<<endl;
return false;
}
}

//end of functions

My name is Barindra Narinesingh
Extra Credit #3



Primes from 2 to 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

End of Program


--------------------------------
Process exited with return value 0
Press any key to continue . . .




