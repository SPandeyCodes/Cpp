#include<iostream>

 using namespace std;
 
 
 int main()
 
 {
 	 string phrase="Sailesh Pandey";
 	 cout<< phrase.length()<<endl;
 	 cout<<phrase[1]<<endl;
 	 phrase[0]='D';
 	 cout<< phrase <<endl;
 	 
 	 //arguments
 	 
 	 cout<<phrase.find("Pand",0)<<endl; // find Pand in the string starting from an index
 	  cout<< phrase.substr( 8,5)<<endl; // find a string with the starting index nd length of the string
 	 
 	 
 	
 	
 	
 	
 	
 	return 0;
 	
 }
