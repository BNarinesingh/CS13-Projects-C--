//  Program to caculate a contestant's score. 
 
#include<iostream>
#include<iomanip>
#include<cmath>  

bool checkPerfect(int x, int num);
void displayFactors(int x, int num);
int total=0;

using namespace std;
int main()
{                                                         
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment Extra #2" <<endl<<endl<<endl<<endl;
   
int num, x;
char again;

do{
cout<<"Enter an integer and I will check and display all the perfect numbers up to that number. What is your number ? ";
cin>>num;  

for(x=1; x<num; x++){
if (checkPerfect(x, num))
displayFactors(x, num);
}

cout<<" Would you like to try another number? ";
cin>>again;
total=0;
cout<<""<<endl;
}while(again=='y'||again=='Y');

 }

 // End of main program 
// Start of Functions 

bool checkPerfect(int x, int num){

int i;

for(i=1;i<num;i++)    //finds all the factors of num starting at 1
 if(num%i==0)		  //if i is a factor, is added to total
  total=total+i;



if(x==total)
 {total=0;
 return true;}
else
 {total=0;
 return false;}
}
 

void displayFactors(int x, int num){
int z, zsum;
cout<<x<<" = ";
for(z=1;z<x;z++)    //finds all the factors of num starting at 1
 if(x%z==0)		  //if i is a factor, is added to total
  {zsum=zsum+z;
	cout<<z<<" + ";}
 

}
