//  Program to roll a die 100 times and display the results.
 
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






