//SAILESH PANDEY
//https://github.com/SPandeyCodes

#include<bits/stdc++.h>
using namespace std;

// function to calculate the sum
int sum(int arr[],int n)
{
    int summ=0;
    for(int i=0;i<n;i++)
    {
        summ=summ+arr[i];
        
    }
    return summ;   
}

// Driver code
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"The sum of the elements in the array is  "<<sum(arr,n)<<endl;
    
    
    return 0;
}