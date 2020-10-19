#include <stdio.h>
#include <stdlib.h>

int main()

{
	system("clear");
	int response = 0;
	
	do {
		printf("Hello! What would you like to do today?\n");
	
		printf("1) Update the system\n");
		printf("2) Install Wine and Lutris\n");
		printf("3) Install software\n");
		printf("4) Exit\n\n");
		printf("Please enter your response: ");
		
		response = 0;
		scanf("%d", &response);
		system("clear");


			if (response <= 4){
	
				switch(response){
        
        				case 1 :
            					system("/home/a/Documents/Update.sh");
            				break;
        				case 2 :
            					system("/home/a/Documents/Wine_and_Lutris_script.sh");
            				break;
        				case 3 :
            					system("/home/a/Documents/Software_Install.sh");
            				break;
           				case 4: 
           				return 0;
    					}
				}
	}
	while(response >= 5);

return 0;
}
