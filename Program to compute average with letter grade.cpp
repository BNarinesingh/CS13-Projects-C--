// Program to compute average with letter grade
 
#include<iostream>
#include<iomanip>
 
using namespace std;
int main()
{
    int 	x,
    		test1total=0, test2total=0, test3total=0,
			test1, test2, test3, 				
			testavg, test1avg, test2avg, test3avg;
			
    char 	grade;
   
    cout<<setprecision(0)<<fixed;
    
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment #13" <<endl<<endl<<endl<<endl;
    
    
	for(x=1; x<6; x=x+1)
	{
    cout<< "What are the three test scores of student # "<<x<<"? ";
    cin>>test1>>test2>>test3;
    
    while(!(test1<=100 && test1>=1 && test2<=100 && test2>=1 && test3<=100 && test3>=1))
	{cout<<"YOU ENTERED AN INVALID SCORE- PLEASE TRY AGAIN."<<endl<<endl;
	 cin>>test1>>test2>>test3;}

	testavg=(test1+test2+test3)/3.0;
		
	  if(testavg<65)
      grade='F';
    else
      if(testavg<70)
        grade='D';
      else
        if(testavg<80)
         grade='C';
        else
          if(testavg<90)
           grade='B';
          else
            grade='A';
	
	cout<<" The average is  "<<testavg<<" and the grade is "<<grade<<endl<<endl;  
    
    	
	test1total=test1total+test1;
    test2total=test2total+test2;
    test3total=test1total+test3;
    
	}

	test1avg=test1total/5.0;
	test2avg=test1total/5.0;
	test3avg=test1total/5.0;
	
	cout<<"The class average for test#1 is: "<<test1avg<<endl;
	cout<<"The class average for test#2 is: "<<test2avg<<endl;
	cout<<"The class average for test#3 is: "<<test3avg<<endl<<endl;
	

    cout<< "End of Program"<<endl<<endl;
    
}
    
 
// End of program
