#include<iostream>


using namespace std;
	// function without argument
	void sayHello()  //void means this function is not gonna return anyhing
  	{
  		cout<<"Hello  Users ! "<< endl;
  		
  		
	  }
	  
	  //function with an argument
	void sayHi(string name)  //void means this function is not gonna return anyhing
  	{
  		cout<<"Hello "<<name<< endl;
  		
  		
	  }
	  
	  void sayHy(string name,int number)  //void means this function is not gonna return anyhing
  	{
  		cout<<"Hello "<<name<<" the boy at "<<number<< endl;
  		
  		
	  }

   int main ()
   
   {
   	
   	
   		cout<< "line1"<<endl; 	
   	  //call the function
   	  sayHello();
   	  
   	  	cout <<"line3"<<endl;
   	  	
   	  	sayHi("Tom");// calling with a parameter
   	  	
   	  	sayHy("Ram",77);
   	  	sayHy("krishhh",88);
   	
   	
   	
   	
   	
   	return 0;
   	
   }
