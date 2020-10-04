#include<bits/stdc++.h>

 using namespace std;
 
 
 int main()
 { 
    int n;
	cout<<"Enter the limitation "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	   { if(i%3==0 && i%5==0)
	        cout<<"FIZZBUZZ"<<endl;
	     else if(i%5==0)
	        cout<<"Buzz"<<endl;
	     else if(i%3==0)
	        cout<<"Fizz"<<endl;
		 
		 
	     else
	       cout<<i<<endl;
		   }	
 	
 	
 	
 	return 0;
 }
