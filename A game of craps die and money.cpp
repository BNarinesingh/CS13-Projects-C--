// A game of craps die and money
 
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

double betAmount(double money, double wager);
void dealer(bool results, double money, double wager);

double money=0, wager=0;

using namespace std;
 int main()
{    
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "ExtraC #5" <<endl<<endl<<endl<<endl;

int games,die1,die2,sum,point;
bool results;


srand(time(NULL));   
money=100;

for(games=1;games<=10;games=games+1){
betAmount(money, wager);

die1=1+rand()%6; //die 1
die2=1+rand()%6; //die 2
sum=die1+die2; //total for verify

cout<<sum;

if(sum==7 ||sum==11) //checks if win
{cout<<" You Win! "<<endl;
results= true;
dealer(results, money, wager);}

else if(sum==2||sum==4) //checks if lost
{cout<<" You lose "<<endl;
results=false;
dealer(results, money, wager);}

else
{cout<<"  <- is your point. Next rolls -> : ";
point=sum; //keep track of point

do{
	die1=1+rand()%6;
	die2=1+rand()%6;
	sum=die1+die2;
	
if(point==sum){
cout<<sum<<" You Win! "<<endl;
results=true;
dealer(results, money, wager);}

else if(sum==7)
{cout<<sum<<" You lose. "<<endl;
results=false;
dealer(results, money, wager);}


else
cout<<sum<<" ";
}while(!(point==sum||sum==7)); //keeps rolling until you win or lose

}


}

cout<<" "<<endl<<endl;
cout<<"End of Program"<<endl;
}
// End of Main Program
// Start of functions

double betAmount(double money,double wager){
if(money<0){
cout<<"Sorry you do not have any money to bid, Thank you for playing!"<<endl;  //verifies if the player has money
return 0;}

else{ 
cout<<"You have $"<<money<<" how much would you like to bid? ";
cin>>wager;

do{
if(wager<1){
cout<<"Please bid at least $1.00. ";	
cin>>wager;}

else if(wager>money){
cout<<"Please do not bid more money than you have. You have $ "<<money<<" money. ";
cin>>wager;}

}while(wager<1||wager>money);
}

}

void dealer(bool results, double money, double wager){
if(results!=false)
money=money+wager;
else
money=money-wager;
}

// End of functions


