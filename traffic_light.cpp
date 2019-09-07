#include<iostream>
#include<conio.h>
#include <windows.h>
using namespace std;

int display(char a,char b,char c,char d,int t1,int t2,int t3,int t4);
int display(char a,char b,char c,char d,int t1,int t2,int t3,int t4)
{
		for(int i=10;i>=0;i--)//ten secound loop
	{
    	system("CLS");
		//for Y light
		 if(i<=1 && a=='G' && b=='R' && c=='R' && d=='R')
		    {
		    	a='Y';
		    	b='Y';
			}//IF
		 else if(i<=1 && a=='R' && b=='G' && c=='R' && d=='R')
		    {
		    	b='Y';
		    	c='Y';
			}//IF
		 else if(i<=1 && a=='R' && b=='R' && c=='G' && d=='R')
		    {
		    	c='Y';
		    	d='Y';
			}//IF
		 else if(i<=1 && a=='R' && b=='R' && c=='R' && d=='G')
		    {
		    	d='Y';
		    	a='Y';
			}//IF
		    
	
  	     cout<<"\n\n\t\t      *********";  
 	  	 cout<<"\n\n\t\t      *      TRAFIC SIGNAL      *";  //heading
      	 cout<<"\n\n\t\t      *********";
   	 	 //main display (lay out)
   	 	 cout<<"\n\n\n\n";
   	 	 cout<<"\n                             |          |                             ";
   	 	 cout<<"\n                             |    |     |                             ";
   	 	 cout<<"\n                     "<<a<<" ["<<t1+i<<"]"<<"                 "<<b<<" ["<<t2+i<<"]";
   	  	 cout<<"\n            ______|    |     |______            ";
   	 	 cout<<"\n                                                                      ";
   	 	 cout<<"\n";
   	 	 cout<<"\n            - - - - - - - - -            - - - - - - - - -          ";	 
 	  	 cout<<"\n";
    	 cout<<"\n            ______            ______          ";
   	 	 cout<<"\n                             |    |     |                             ";
   	 	 cout<<"\n                     "<<c<<" ["<<t3+i<<"]"<<"                 "<<d<<" ["<<t4+i<<"]" ;
 	  	 cout<<"\n                             |    |     |                             ";
  	  	 cout<<"\n                             |          |                             ";
	
 	Sleep(1000);//delay program for one minute 
	
	}//for
}//display

 main()
{ 
	while(1)//infinite loop
	{
       //a
   	   display('G','R','R','R',0,0,11,21);
      	system("CLS");
      	//b
      	display('R','G','R','R',21,0,0,10);
      	system("CLS");
      	//c
      	display('R','R','G','R',10,21,0,0);
      	system("CLS");
      	//d
      	display('R','R','R','G',0,10,21,0);
      	system("CLS");
   }//while
}//main
