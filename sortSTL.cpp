#include<iostream>
#include<algorithm> //STL

using namespace std;
 void show(int a[])
  {
  	for(int i=0;i<10;i++)
  	 cout<<a[i]<< " ";
  	
  	
  	
  }
  
  int main()
  
  {
  	int a[10]={1,4,8,9,0,2,6,3,5,7};
  	
  	cout<<"Before sorting --"<<endl;
  	
  	show(a);
  	
  	sort(a,a+10);// sort(start address, endaddress)  
  	// quicksort  then  heapsort  then insertionsort
  	
  	cout<<"After sorting --"<<endl;
  	
  	show(a);
  	
  	
  	
  	
  	
  	
  	
  	
  	return 0;
  }
