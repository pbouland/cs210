#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

//function to add an hour
void AddHour(int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2, string& ampm) {
	
	
	if(clock12Hour2 < 10) {
		clock12Hour2 = clock12Hour2 + 1;
		
	}
	
	if(clock12Hour2 == 10) {
		
		clock12Hour1 = 1;
		clock12Hour2 = 0;	
		
	
	}	
	
	if (clock12Hour1 == 1 && clock12Hour2 == 3) {
		clock12Hour1 = 0;
		clock12Hour2 = 1;
		
	}
	
	if(clock24Hour2 < 10) {
		clock24Hour2 = clock24Hour2 + 1;
		
	}
	
	if(clock24Hour1 == 1 && clock24Hour2 == 10) {
		clock24Hour1 = 2;
		clock24Hour2 = 0;
		
	}
	
	if(clock24Hour2 == 10) {
		clock24Hour2 = 0;
		clock24Hour1 = 1;
		
	}
	
	if(clock24Hour1 == 2 && clock24Hour2 == 4) {
		clock24Hour1 = 0;
		clock24Hour2 = 0;
		
	}
	
}

//function to add a minute
void AddMinute(int& minutes1, int& minutes2, int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2, string& ampm) {
	
	if(minutes2 < 10) {
		minutes2 = minutes2 + 1;
		
	}
	
	if(minutes1 == 5 && minutes2 == 10) {
		minutes1 = 0;
		minutes2 = 0;
		
		if(clock12Hour2 < 10) {
			clock12Hour2 = clock12Hour2 + 1;
		
		}
	
		if(clock12Hour2 == 10) {
			clock12Hour1 = 1;
			clock12Hour2 = 0;	
	
		}	
	
		if(clock12Hour1 == 1 && clock12Hour2 == 3) {
			clock12Hour1 = 0;
			clock12Hour2 = 1;
			
		}
		
		if(clock24Hour2 < 10) {
			clock24Hour2 = clock24Hour2 + 1;
		
		}
	
		if(clock24Hour1 == 1 && clock24Hour2 == 10) {
			clock24Hour1 = 2;
			clock24Hour2 = 0;
		
		}
	
		if(clock24Hour2 == 10) {
			clock24Hour2 = 0;
			clock24Hour1 = 1;
		
		}
	
		if(clock24Hour1 == 2 && clock24Hour2 == 4) {
			clock24Hour1 = 0;
			clock24Hour2 = 0;
		
		}
	
	}
	
	if(minutes1 == 4 && minutes2 == 10) {
		minutes1 = 5;
		minutes2 = 0;
		
	}
	
	if(minutes1 == 3 && minutes2 == 10) {
		minutes1 = 4;
		minutes2 = 0;
		
	}
	
	if(minutes1 == 2 && minutes2 == 10) {
		minutes1 = 3;
		minutes2 = 0;
		
	}
	
	if(minutes1 == 1 && minutes2 == 10) {
		minutes1 = 2;
		minutes2 = 0;
		
	}
	
	if(minutes2 == 10) {
		minutes1 = 1;
		minutes2 = 0;
		
	}
	 
	
}

//function to add a second
void AddSecond(int& seconds1, int& seconds2, int& minutes1, int& minutes2, int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2,
				string& ampm) {
	
	if(seconds2 < 10) {
		seconds2 = seconds2 + 1;
		
	}
	
	if(seconds1 == 5 && seconds2 == 10) {
		seconds1 = 0;
		seconds2 = 0;
		
		if(minutes2 < 10) {
			minutes2 = minutes2 + 1;
		
		}
	
		if(minutes1 == 5 && minutes2 == 10) {
			minutes1 = 0;
			minutes2 = 0;
		
			if(clock12Hour2 < 10) {
				clock12Hour2 = clock12Hour2 + 1;
		
			}
	
			if(clock12Hour2 == 10) {
				clock12Hour1 = 1;
				clock12Hour2 = 0;	
	
			}	
	
			if(clock12Hour1 == 1 && clock12Hour2 == 3) {
				clock12Hour1 = 0;
				clock12Hour2 = 1;
		
			}
		
			if(clock24Hour2 < 10) {
				clock24Hour2 = clock24Hour2 + 1;
		
			}
	
			if(clock24Hour1 == 1 && clock24Hour2 == 10) {
				clock24Hour1 = 2;
				clock24Hour2 = 0;
		
			}
	
			if(clock24Hour2 == 10) {
				clock24Hour2 = 0;
				clock24Hour1 = 1;
		
			}
	
			if(clock24Hour1 == 2 && clock24Hour2 == 4) {
				clock24Hour1 = 0;
				clock24Hour2 = 0;
		
			}
	
		}	
	
		if(minutes1 == 4 && minutes2 == 10) {
			minutes1 = 5;
			minutes2 = 0;
		
		}
	
		if(minutes1 == 3 && minutes2 == 10) {
			minutes1 = 4;
			minutes2 = 0;
		
		}
	
		if(minutes1 == 2 && minutes2 == 10) {
			minutes1 = 3;
			minutes2 = 0;
		
		}
	
		if(minutes1 == 1 && minutes2 == 10) {
			minutes1 = 2;
			minutes2 = 0;
		
		}
	
		if(minutes2 == 10) {
			minutes1 = 1;
			minutes2 = 0;
		
		}
		
	}
		
	if(seconds1 == 4 && seconds2 == 10) {
		seconds1 = 5;
		seconds2 = 0;
		
	}
	
	if(seconds1 == 3 && seconds2 == 10) {
		seconds1 = 4;
		seconds2 = 0;
		
	}
	
	if(seconds1 == 2 && seconds2 == 10) {
		seconds1 = 3;
		seconds2 = 0;
		
	}
	
	if(seconds1 == 1 && seconds2 == 10) {
		seconds1 = 2;
		seconds2 = 0;
		
	}
	
	if(seconds2 == 10) {
		seconds1 = 1;
		seconds2 = 0;
		
	}
	
	
}

int main() {
	
	int userInput;
	string options;
	
	//outputting clocks
	int clock12Hour1 = 1;
	int clock12Hour2 = 2;
	int clock24Hour1 = 0;
	int clock24Hour2 = 0;
	int minutes1 = 5;
	int minutes2 = 9;
	int seconds1 = 5;
	int seconds2 = 9;
	char colon1 = ':';
	char colon2 = ':';
	string ampm = "A M";
	
	system("CLS");
	
	cout << "**************************\t" << "**************************" << endl;
	cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
	cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << " " << ampm << "       *\t" 
		 << "*     " << clock24Hour1 << clock24Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << "           *" << endl;
	cout << "**************************\t" << "**************************" << endl;
	cout << endl;
	
	do {
		
		cin >> options;
		if(options == "Options") {
			//options menu 
			cout << "\t\t**************************" << endl;
			cout << "\t\t*  1-Add One Hour        *" << endl;
			cout << "\t\t*  2-Add One Minute      *" << endl;
			cout << "\t\t*  3-Add One Second      *" << endl;
			cout << "\t\t*  4-Exit Program        *" << endl;
			cout << "\t\t**************************" << endl;

			//switch statement to execute options menu
			cin >> userInput;
			switch(userInput) {
				case 1:
					//call function
					AddHour(clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
					cout << "**************************\t" << "**************************" << endl;
					cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
					cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << " " 
					 	 << ampm << "       *\t" 
		 			 	 << "*     " << clock24Hour1 << clock24Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << "           *" 
					 	 << endl;
					cout << "**************************\t" << "**************************" << endl;
					cout << endl;
					break;
				case 2:
					//call function
					AddMinute(minutes1, minutes2, clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
					cout << "**************************\t" << "**************************" << endl;
					cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
					cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << " " 
					 	 << ampm << "       *\t" 
		 				 << "*     " << clock24Hour1 << clock24Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << "           *" 
					 	 << endl;
					cout << "**************************\t" << "**************************" << endl;
					cout << endl;
					break;
				case 3:
					//call function
					AddSecond(seconds1, seconds2, minutes1, minutes2, clock12Hour1, clock12Hour2, clock24Hour1, clock24Hour2, ampm);
					cout << "**************************\t" << "**************************" << endl;
					cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
					cout << "*     " << clock12Hour1 << clock12Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << " " 
					 	 << ampm << "       *\t" 
		 			 	 << "*     " << clock24Hour1 << clock24Hour2 << colon1 << minutes1 << minutes2 << colon2 << seconds1 << seconds2 << "           *" 
					 	 << endl;
					cout << "**************************\t" << "**************************" << endl;
					cout << endl;
					break;
				case 4:
					//exits program by returning EXIT_SUCCESS
					return EXIT_SUCCESS;
					break;
				default:
					break;
		
			}
		}
		
		else {
			return EXIT_SUCCESS;
			
		}
	
	} while(options != "q");
	
	return 0;
	
}
