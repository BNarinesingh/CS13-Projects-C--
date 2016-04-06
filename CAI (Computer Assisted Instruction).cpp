// CAI (Computer Assisted Instruction) version 2.0
 
#include<iostream>
#include<iomanip>  
#include<ctime>
#include<cstdlib>


using namespace std;
int main()
{                                                         
cout<< "My name is Barindra Narinesingh"<<endl;
cout<< "ExtraC #7" <<endl<<endl<<endl<<endl;
cout<<"The first 100 palindrome are: ";

int x,num,a=0,b,c,sum;

for(x=1;x<=100;x=x+1){
num=x;
sum=0;

while(num>0){
a=num%10;
num=num/10;
b=a+(b*10);
}

if(b==x)
cout<<num<<" ";
}





cout<<" "<<endl<<endl;
cout<< "End of Program"<<endl<<endl;
}

// End of main program 
// Start of Functions 	

//end of functions


