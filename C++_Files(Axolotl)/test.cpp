#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
using namespace std;

void pausechamp();
void pogu();
void omegalul();

int main()
{ 
 int randomNum,guess,a,b;
 int guessCount=0;
 
 a=randomNum-5;
 b=randomNum+5;
 
 while(randomNum != guess)
 {
 	cout<<"\n Guess the number(0-100) : ";
 	cin>>guess;
 	guessCount++;
 	if(a<=guess&&guess<=b)
	 {
	 	if(guess==randomNum)
	 	{
	 		pogu();
		 }
		else
			pausechamp();
	 }
	else
	{
		omegalul();
	}
	if(guessCount==3)
	{
		if(randomNum%2==0)
	    {
		    cout<<"\n Hint \n The Number is Even"<<endl;
	    }
	    else
	    {
	        cout<<"\n Hint \n The Number is Odd"<<endl;

		}
	}
	if(guessCount==5)
	{
		if(randomNum<50)
		{
			cout<<"\n Hint \n The Number Is Less than 50"<<endl;
		}
		else
		{
			cout<<"\n Hint \n The Number is More than 50"<<endl;
		}
	}
	if(guessCount==8)
	{
		cout<<"\n Hint \n The double of the Secret Number Is: "<<randomNum*2<<endl;
		   }       
	}
 }


void pausechamp()
{
     cout<<setw(25)<<" You Are Close :) "<<endl;	
}
void pogu()
{
	cout<<setw(25)<<" You Got It! :[ "<<endl;
}
void omegalul()
{
	cout<<setw(25)<<" You are not close :( "<<endl;
}