// Program to compute average of 3 classes with letter grades  using functions
 
#include<iostream>
#include<iomanip>

double ComputeAvg(int test1, int test2, int test3);
char LetterGrade(double testavg);
 
using namespace std;
int main()
{
    int     x,
            test1, test2, test3,                       // sets holders for test scores
            test1total=0,  //set to 0, can be changed to get more accurate scores
            test2total=0,
            test3total=0;        
                   
    double  testavg, test1avg, test2avg, test3avg; // sets holders for averages
                
    char    grade;
   
                                                             
    
    cout<< "My name is Barindra Narinesingh"<<endl;
    cout<< "Assignment #18" <<endl<<endl<<endl<<endl;
    
   
    for(x=1; x<6; x=x+1)                                                                 // can change x for more tests
    {
    cout<< "What are the three test scores of student # "<<x<<"? ";
     cin>>test1>>test2>>test3;
   
    while(!(test1<=100 && test1>=1 && test2<=100 && test2>=1 && test3<=100 && test3>=1)) //makes sure the numbers are > 1 but < 100
     {cout<<"YOU ENTERED AN INVALID SCORE- PLEASE TRY AGAIN. "<<endl<<endl;
     cin>>test1>>test2>>test3;}

    testavg= ComputeAvg(test1, test2, test3);
    
	test1total=test1total+test1;
    test2total=test2total+test2;
    test3total=test3total+test3;
   
    grade=LetterGrade(testavg);
       
  
    cout<<setprecision(0)<<fixed; 							// Outputs whole numbers
    
    cout<<" The average is  "<<testavg<<" and the grade is "<<grade<<endl<<endl; 
   
    }

    test1avg=test1total/5.0;                               //Computes average and rounds down
    test2avg=test2total/5.0;
    test3avg=test3total/5.0;

                                                           

    cout<<"The class average for test #1 is: "<<test1avg<<endl;                           
    cout<<"The class average for test #2 is: "<<test2avg<<endl;
     cout<<"The class average for test #3 is: "<<test3avg<<endl<<endl;
    cout<< "End of Program"<<endl<<endl;
   
    
 }

 // End of program
 
 // Functions
 
 double ComputeAvg(int test1, int test2, int test3)											//computes the average of 3 test scores
 {
 	int total;
 	total=(test1+test2+test3);
 	return total/3.0;
 }
 
 char LetterGrade(double testavg)
 {
  char grade;  
	if(testavg<65)                                                                        //computes the letter grade
      grade='F';
    else if(testavg<70)
     grade='D';
    else if(testavg<80)
     grade='C';
    else if(testavg<90)
     grade='B';
    else
     grade='A';
    return grade;
 }
 
 // End of functions
 
 My name is Barindra Narinesingh
Assignment #18



What are the three test scores of student # 1? 60 66 90
 The average is  72 and the grade is C

What are the three test scores of student # 2? 80 76 99
 The average is  85 and the grade is B

What are the three test scores of student # 3? 50 66 51
 The average is  56 and the grade is F

What are the three test scores of student # 4? 99 99 90
 The average is  96 and the grade is A

What are the three test scores of student # 5? 66 67 68
 The average is  67 and the grade is D

The class average for test #1 is: 71
The class average for test #2 is: 75
The class average for test #3 is: 80

End of Program


--------------------------------
Process exited with return value 0
Press any key to continue . . .
