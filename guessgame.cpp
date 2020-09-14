#include<iostream>

using namespace std;

int main()
{
	 
	int realNum=99;
	int guess;
	int guessLimit=10;
	int guessCount=0;
	
	while(guess!=realNum)
	{
		
		if(guessCount<=guessLimit)
		{
		cout<<"Enter your guess ";
		cin>>guess;
		guessCount++;
	    }
		else
		{
		cout<<"Time Out"<<endl;
		break;}
		
		
		
	}
	 if(guess==realNum){
	 
	 cout<<"You Win"<<endl;
}
	 
	 return 0;
	
	
	
}
