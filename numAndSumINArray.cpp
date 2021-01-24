//Sailesh Pandey

#include<bits/stdc++.h>
using namespace std;

//functional code

bool arrFunction(int arr[],int arr_size,int sum)

{

  sort(arr,arr+arr_size);

  int first=0;
  int last=arr_size-1;

  while(first<last)
  {

  if(arr[first]+arr[last]==sum)
    {

        return 1;
    }
    else if(arr[first]+arr[last]<sum)
     {
         first++;
     }
     else 
      last--;
  }
  return 0; //not found (FALSE)
}


//driver code(code that uses the code or algorithm that we create)

int main()
{
   int arr[]={2,5,8,4,6,7};
   int arr_size=sizeof(arr)/sizeof(arr[0]);
   int sum=1; // change the sum and try

   if(arrFunction(arr,arr_size,sum))
   {
     cout<<"The sum is present in the array"<<endl;

   }
   else
     {
         cout<<"The Sum is Not Present in the arrray"<<endl;
     }

}

