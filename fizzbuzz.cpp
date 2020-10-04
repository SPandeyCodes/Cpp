#include<bits/stdc++.h>

 using namespace std;
 
 
 int main()
 { 
    int n;
	cout<<"Enter the limitation "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	   { if(i%3==0 && i%5==0)
	        cout<<i<<"="<<"FIZZBUZZ"<<endl;
	     else if(i%5==0)
	        cout<<i<<"="<<"Buzz"<<endl;
	     else if(i%3==0)
	        cout<<i<<"="<<"Fizz"<<endl;
		 
		 
	     else
	       cout<<i<<endl;
		   }	
 	
 	
 	
 	return 0;
 }
