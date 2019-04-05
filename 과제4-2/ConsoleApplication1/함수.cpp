#include "Çì´õ.h"
int N = 0;
DATA weblog[DATALENGTH];
void read() {

	FILE *fp;
	char *pStr;
	char strTmp[LENGTH];
	char filename[LENGTH];
	int i = 0,count=0;

	scanf("%s", filename);

	fp = fopen(filename, "r");

	while (!feof(fp)) {

		pStr = fgets(strTmp, sizeof(strTmp), fp);

		fscanf(fp, "%[^,],[%[^,],%[^,],%d",
			weblog[count].IP,
			weblog[count].Time,
			weblog[count].URL,
			&weblog[count].Status);

		count++;
	

	}
	fclose(fp);
	N=count-1;
}

void print() {

	for(int i=0;i<N;i++){
		printf("%s\n", weblog[i].Time);
		printf("\tIP: %s\n",weblog[i].IP);
		printf("\tURL: %s\n", weblog[i].URL);
		printf("\tStatus: %d\n", weblog[i].Status);
	}
}

int compareT(const void *A, const void *B) {
	
	DATA *pa = (DATA*)A;
	DATA *pb = (DATA*)B;

	char* date[2][3];
	char *token;
	
	char* compare[2];

	int j = 0;
	token = strtok(pa->Time, "/");
	while (token != NULL) {
		date[0][j] = token;
		j++;
		token = strtok(NULL, "/");
	}
	
	j = 0;
	token = strtok(pb->Time, "/");
	while (token != NULL) {
		date[1][j] = token;
		j++;
		token = strtok(NULL, "/");
	}
	
	for (int i = 0; i<2; i++) {
		if (strcmp(date[i][1], "Jan") == 0) strcpy(date[i][1],"1");
		else if (strcmp(date[i][1], "Feb") == 0) strcpy(date[i][1] ,"2");
		else if (strcmp(date[i][1], "Mar") == 0) strcpy(date[i][1], "3");
		else if (strcmp(date[i][1], "Apr") == 0) strcpy(date[i][1], "4");
		else if (strcmp(date[i][1], "May") == 0) strcpy(date[i][1], "5");
		else if (strcmp(date[i][1], "Jun") == 0) strcpy(date[i][1], "6");
		else if (strcmp(date[i][1], "Jul") == 0) strcpy(date[i][1], "7");
		else if (strcmp(date[i][1], "Aug") == 0) strcpy(date[i][1], "8");
		else if (strcmp(date[i][1], "Sep") == 0) strcpy(date[i][1], "9");
		else if (strcmp(date[i][1], "Oct") == 0) strcpy(date[i][1], "10");
		else if (strcmp(date[i][1], "Nov") == 0) strcpy(date[i][1], "11");
		else if (strcmp(date[i][1], "Dec") == 0) strcpy(date[i][1], "12");
	}


	
}

int compareI(const void *A, const void *B) {

	return strcmp(((DATA*)A)->IP, ((DATA*)B)->IP);

}

void sort(char *type) {

	if (strcmp(type, "time") == 0)
	{
		qsort(weblog, N, sizeof(DATA), compareT);
	}
	else if (strcmp(type, "ip") == 0) 
	{
		qsort(weblog, N, sizeof(DATA), compareI);
		for (int i = 0; i<N; i++) {
			printf("%s\n", weblog[i].IP);
			printf("\tTime: %s\n", weblog[i].Time);
			printf("\tURL: %s\n", weblog[i].URL);
			printf("\tStatus: %d\n", weblog[i].Status);
		}
	}

}
