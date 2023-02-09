#include <iostream>
using  namespace std;
int main()
{


	char day;
	
	cout << "enter first char of the day u want to print : ";
	
	cin >> day;
	
	switch (day){
	
	case 's':cout << "enter the next charecter : ";
		
		cin >> day;
		
		switch (day) { 
			
			case 'a':cout << "saturday";break;
		
			case 'u':cout << "sunday";break; 
			
			default:cout << "fk u";

		}break;

	
	
	
	case 'm':cout << "monday";break;
		
	
	
	
	case 't':cout << "enter the next charecter : ";
		
		cin >> day;
		
		switch (day) {
		case 'u':cout << "tuesday";break;
		
		case 'h':cout << "thursday";break; 
		
		default:cout << "fk u";

		}break;

	
	
	case 'w':cout << "wednesday";break;
	
	
	case 'f':cout << "friday";break;

	default:cout << "fk u";

	}





}

