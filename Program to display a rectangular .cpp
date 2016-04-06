// Program to display a rectangular design of r rows by c columns using a character that the user enters.
 
#include<iostream>
#include<iomanip> 

void Rectangle(int row, int column, char symbol);

using namespace std;
int main()
{
    int     row,           // Value for outer loop
            column;        // Value for inner loop
    char	symbol;        // holds the character symbol                                                    
   
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment #17" <<endl<<endl<<endl<<endl;
   
	cout<<"Enter the number of rows and columns of the rectangle ";
	cin>>row>>column;
	
	cout<<"Now enter the character to be used to make the rectangle ";
    cin>>symbol;
    
    cout<<"Here is your rectangle"<<endl;
    
	Rectangle(row, column, symbol);    // calls on rectangle

 
 cout<<""<<endl<<endl;
 cout<<"End of Program"<<endl;
}
 
// End of main program

// Side functions

void Rectangle(int row, int column, char symbol)
{
	int x, i;
    column=column-1;
	for(x=1; x<=row; x=x+1)                                                        
    {for(i=1; i<=column; i=i+1)
     cout<<symbol<<" ";
	  cout<<endl;
	
	}

}
