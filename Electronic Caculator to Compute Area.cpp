    // Program to display the following choices and to then ask the user for the dimensions of the geometric figure and to compute and display the area of the figure.

     
    #include<iostream>
    #include<iomanip>
    #include<cmath>
     
    using namespace std;
    int main()
    {
        int choice;                     //holds number of years
        double const Pi=3.1415;          //holds the Pi value
        double length,                  //holds the length
               width,                   //holds the width
               radius,                  //holds the radius
               height,                  //holds the height
               base,                    //holds the base
               area;          			//holds the area of the figure
        cout<<setprecision(2)<<fixed;
       
        cout<< "My name is Barindra Narinesingh"<<endl;
        cout<< "Assignment #12 " <<endl<<endl<<endl<<endl;
       
        cout<< "My Electronic Caculator to Compute Area"<<endl;
       
        do
        {cout<<setw(30)<<"1) For Rectangle"<<endl;
        cout<<setw(30)<<"2) For Circle"<<endl;
        cout<<setw(30)<<"3) For Triangle"<<endl;
        cout<<setw(30)<<"4) Quit"<<endl<<endl;
        cout<<setw(30)<<"What is your choice "<<endl<<endl;
       
        cin>>choice;
        
		if(!(choice==1 || choice==2 || choice ==3 || choice ==4))
        cout<<"Invalid selection. Please try again."<<endl;
        else
		cout<<""<<endl;
        
        }while (!(choice==1 || choice==2 || choice ==3 || choice ==4));
    
		if(choice==1)
        do
		{cout<<"What is the length and width of the rectangle? ";
		cin>>length,width;
		if(!(length>0 && width>0))
		cout<<"Invalid entry. Please try again.";
		else{
		area=length*width;
		cout<<"The area is "<<area<<" sq inches."<<endl;}
		
		}while(!(length>0 && width>0)); //repeats program if length or width less than 0.
		
		else if(choice==2)
        do
		{cout<<"What is the radius of the circle? ";
		cin>>radius;
		if(!(radius>0))
		cout<<"Invalid entry. Please try again.";
		else{
		area=pow(radius,2.0)*Pi;
		cout<<"The area is "<<area<<" sq inches."<<endl;}
				
		}while(!radius>0); //repeats program if radius less than 0.
		
		if(choice==3)
        do
		{cout<<"What is the base and height of the rectangle? ";
		cin>>base,height;
		if(!(base>0 && height>0))
		cout<<"Invalid entry. Please try again.";
		else{
		area=base*height;
		cout<<"The area is "<<area<<" sq inches."<<endl;}
		
		}while(!(base>0 && height>0)); //repeats program if length or width less than 0.
		
				
		else //if 4 is selected else is the last option
		cout<<"Thank you for trying My Electronic Caculator, have a nice day.";
        
		
		cout<<""<<endl<<endl;
        cout<< "End of Program"<<endl;
      
        
     }
     
    // End of program

