//SAILESH PANDEY
//https://github.com/SPandeyCodes


#include<bits/stdc++.h>
using namespace std;

//Driver code
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,99,340};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];// assigning the max element to compare on its basis
    for(int i=1;i<n;i++)
     {
         if(arr[i]>=max)
          max=arr[i];
          
         
     }
     
     cout<<"The maximun number among the array elements is: "<<max<<endl;
     return 0;
}