#include "Çì´õ.h"

int main(void) {


	char command[LENGTH];
	char type[LENGTH];
	while (1) {
		printf("$ ");
		scanf("%s",&command);

		if (strcmp(command, "read") == 0) read();
	
		else if (strcmp(command, "print") == 0) print();
		
		else if (strcmp(command, "sort") == 0) {
			scanf(" %s", &type);
			if (strcmp(type, "-t") == 0) sort("time");
			else if (strcmp(type, "-ip") == 0) sort("ip");
		}
		
		else if (strcmp(command, "exit") == 0)
			break;
		printf("\n");
	}
}


