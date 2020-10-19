#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	system("clear");
	int response;
	
	cout << "Hello! What would you like to do today?\n\n";

	cout << "1) Update the system\n";
	cout << "2) Install Wine and Lutris\n";
	cout << "3) Install software\n";
	cout << "4) Exit\n\n";
	cout << "Please enter your response: ";
	
	
	cin >> response;
	system("clear");
	
	switch(response) {
		case 1 :
			system("/home/a/Documents/Update.sh");
		break;
		case 2 :
			system("/home/a/Documents/Wine_and_Lutris_script.sh");
		break;
		case 3 :
			system("/home/a/Documents/Software_Install.sh");
		break;
		case 4 :
			cout << "Goodbye!\n\n";
		default :
			cout << "The input you've given is invalid. Please give a valid answer: \n\n";
	}
return 0;
};
