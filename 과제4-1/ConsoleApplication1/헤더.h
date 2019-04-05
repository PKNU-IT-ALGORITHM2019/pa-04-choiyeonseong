#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MIN 1000
#define MAX 100000
void swap(int *a, int *b);
void RandomData(int data[], int N);
void ReversedData(int data[], int N);
void arrcpy(int data1[], int data2[], int N);
int compare(const void *first, const void *second);

void bubbleSort(int A[], int n);
void insertionSort(int A[], int n);
void selectionSort(int A[], int n);
void mergeSort(int A[], int p, int r);
void quickSort1(int A[], int p, int r);
void quickSort2(int A[], int p, int r);
void quickSort3(int A[], int p, int r);
void heapSort(int *data, int num);




