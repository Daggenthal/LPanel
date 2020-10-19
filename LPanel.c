#include <stdio.h>
#include <stdlib.h>

int main()

{
	system("clear");
	char response;
	
	do {
		response=0;
		system("clear");
		printf("Hello! What would you like to do today?\n");
	
		printf("1) Update the system\n");
		printf("2) Install Wine and Lutris\n");
		printf("3) Install software\n");
		printf("4) Exit\n\n");
		printf("Please enter your response: ");
		
		response = getchar();
		printf("\n");		

		switch(response){       				
			case '1' :	system("/home/a/Documents/Update.sh"); 			break;
			case '2' :	system("/home/a/Documents/Wine_and_Lutris_script.sh"); 	break;
			case '3' :	system("/home/a/Documents/Software_Install.sh");		break;
			case '4' : 	return 0;							break;					
    	}
	}
	while(1);

return 0;
}
