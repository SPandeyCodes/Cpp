#include<iostream>


using namespace std;

	int cube(int num) // int,double,char,string all can be used to return
	{
		int result;
		result=num*num*num;
		return result;// after this command goes to the calling block . so if there is any next line below this, it wont be executed
		
	}

int main()
{
	
     int ans;
	 cout<< "the cube is "<<cube(2)<<endl;
	 ans= cube(3);
	 cout<<"the cube is "<<ans<<endl;
	
	
	return 0;
	
}
