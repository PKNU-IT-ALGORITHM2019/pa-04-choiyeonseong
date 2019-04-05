#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LENGTH 50
#define DATALENGTH 16000

typedef struct
{
	char IP[LENGTH];	//10.131.2.1
	char Time[LENGTH];	//[30/Nov/2017:08:46:59
	char URL[LENGTH];	//GET / HTTP/1.0
	int Status;	//302
}DATA;

int compareT(const void *A, const void *B);
int compareI(const void *A, const void *B);
void read();
void print();
void sort(char *type);
