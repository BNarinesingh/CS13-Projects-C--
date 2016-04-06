// Write a program that will display tree and its base based on user input
 
#include<iostream>
#include<iomanip>
void treeTop(int rows);

using namespace std;
 int main()
{
    int   rows,            // Row and column holders
          a, b, c,d ;                   // Variables
    cout<<setprecision(0)<<fixed;    // Outputs only up to 0 places                                  
    
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "ExtraC #4" <<endl<<endl<<endl<<endl;
   
   
   
    cout<<"Enter the number of layers for the tree ";
    cin>>rows;
   
   
    cout<<"Here is your Tree"<<endl;
	
	for(d=1;d<=rows;d=d+1)
	treeTop(rows*d);


for(a=1; a<=rows/2; a=a+1)                       // Draws bottom of tree
{cout<<setw(rows*d-2)<<" ";
for(b=1; b<=rows/2; b=b+1)
cout<<"*";
cout<<endl;
}
cout<<" "<<endl<<endl;
cout<<"End of Program"<<endl;

}

// End of Main Program
// Start of functions
void treeTop(int rows){
int x,y,z;

    for(x=0; x<=rows; x=x+1)                   // Draws top of tree                                         
    {
     for(y=x; y<=rows; y=y+1)
     {cout<<" ";
     }
      for(z=0; z<2*x-1;z=z+1)
      {cout<<"*";
      }
    cout<<""<<endl;
    
     }
}
//End of function

My name is Barindra Narinesingh
ExtraC #4



Enter the number of layers for the tree 4
Here is your Tree

    *
   ***
  *****
 *******

        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************

            *
           ***
          *****
         *******
        *********
       ***********
      *************
     ***************
    *****************
   *******************
  *********************
 ***********************

                *
               ***
              *****
             *******
            *********
           ***********
          *************
         ***************
        *****************
       *******************
      *********************
     ***********************
    *************************
   ***************************
  *****************************
 *******************************
                  **
                  **


End of Program

--------------------------------
Process exited with return value 0
Press any key to continue . . .
