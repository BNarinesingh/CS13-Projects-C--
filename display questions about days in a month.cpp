// Program to display questions about days in a month
 
#include<iostream>
#include<iomanip>  
#include<ctime>
#include<cstdlib>
string char const *Names[]={'January', 'February','March','April','May','June','July','August','September','October','November','December'};
 int	Days []={31,28,31,30,31,30,31,31,30,31,30,31};

using namespace std;
int main()
{                                                         
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment #23" <<endl<<endl<<endl<<endl;

int i,ans, month, score=0;
srand(time(NULL));

for(i=1;i<=10;i=i+1){
month=rand()%11;	

cout<<"How many days are there in the month of "<<Names[month]<<"? ";
cin>>ans;

if(ans==Days[month]){
cout<<"Correct!"<<endl<<endl;
score=score+10;}

else
cout<<"No "<<Names[month]<<" has "<<Days[month]<<" Days."<<endl<<endl;
}

cout<<"Your total score is "<<score<<endl;


cout<<" "<<endl<<endl;
cout<< "End of Program"<<endl<<endl;
}

// End of main program 
// Start of Functions 	
//end of functions

