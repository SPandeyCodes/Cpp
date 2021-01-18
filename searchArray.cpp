//sailesh pandey
//https://github.com/SPandeyCodes


#include<bits/stdc++.h>
using namespace std;

int recSearch(int arr[],int l,int r, int x)
{

  if(arr[l]==x)
   return l;
  if(arr[r]==x)
   return r;
  if(r<l)  // to check wheather the searching complated and r becomes greater than l by passing it
   return -1;
   //recursive function to move forward skipping the first and the last elements of the array
   return recSearch(arr,l+1,r-1,x);
  

}

//main code
int main()
{
    int arr[]={0,1,2,3,4,6,7,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);// to check the size of the array elements
    int x=5;// search element
    int index=recSearch(arr,0,n-1,x);// calling the function
    if(index!=-1)
     cout<<"The element is at index :"<<index<<endl;
    else
     cout<<"The element doesnot exixts :)"<<endl;


    return 0;
}