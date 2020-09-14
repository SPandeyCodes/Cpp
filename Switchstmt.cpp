  
    #include<iostream>
    
    using namespace std;
    
    string getDayOfWeek(int dayNum)
    {
    	string dayName;
    	
    	switch(dayNum){
		
    	 case 0:
    	 	dayName="Sunday";
    	 	break;
    	 case 1:
		  	dayName="Monday";
		  	break;
		 case 2:
		    dayName="Tuesday";
		    break;
	 	case 3:
		    dayName="Wednesday";
		    break;
			case 4:
		    dayName="Thursday";
		    break;
		case 5:
		    dayName="friday";
		    break;
		case 6:
		    dayName="saturday";
			break;
		default:
		    dayName="Enter a valid choice";					
    	
    }
    	return dayName;
    	
	}
    
    int main()
    {
    	int num;
    	
    	cout<< "Enter your CHOICE between 0-6 "<<endl;
    	
    	cin>> num ;
		cout<<getDayOfWeek(num)<<endl;
    	
    	
    	
    	
    	return 0;
	}
