// Playing the lotto (I attempted to win so i delayed my submission, after 7 days of trying 100,000 5 times per day 
// i have give up, its near impossible to win the lotto)

#include<iostream>
#include<iomanip> 
#include<ctime>
#include<cstdlib>

const int size=6;
int num[size],
	win[size],
	match=0;
double cost=0;

void rolls(int tries,int win[size]);

	
using namespace std;
int main()
{                                                        
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "ExtraC #8" <<endl<<endl<<endl<<endl;
	cout<<setprecision(2)<<fixed;
	
int x,c,tries;

for(x=0;x<6;x=x+1)      
win[x]=1+rand()%54;		//gets 6 random numbers in win array

cout<<"Current jackpot is $220,000,000.00 "<<endl;
cout<<"How many games would you like to play? (each game cost $0.50) ";
cin>>tries;
cout<<" "<<endl<<endl;
cout<<"Winning Numbers are : ";

for(c=0;c<size;c++)
cout<<win[c]<<" ";

cout<<" "<<endl<<endl;
rolls(tries, win);

cout<< "End of Program"<<endl<<endl;
}
// End of main program 

// Start of functions

void rolls(int tries,int win[size]){
int a,b,w,y,z,money=0;

for(a=0;a<tries;a++){
if(money==220000000)		// if you ever win, keeps breaking the loop until its over
break;

else
{ for(w=0;w<6;w++)		//gets 6 random numbers in num array
	num[w]=1+rand()%54;

cout<<"Game #"<<a+1<<" ";
 
for(b=0;b<6;b++)
cout<<num[b]<<" ";

int match=0;
for(y=0;y<6;y++)		//compares numbers
 for(z=0;z<6;z++)
  if(num[y]==win[z])
	match=match+1;

cost=cost+0.5;

if(match>0)
cout<<" You have "<<match<<" matching numbers. Cost so far $"<<cost<<endl;

else if(match==6)
{cout<<" You have won the lotto !!! It only cost you $"<<a*.50;
money=220000000;}
else
cout<<" No matching numbers. Cost so far $"<<cost<<endl;

cout<<" "<<endl;
}
}}
