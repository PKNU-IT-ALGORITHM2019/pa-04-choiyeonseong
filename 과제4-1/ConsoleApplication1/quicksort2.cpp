#include "Çì´õ.h"
int  partition2(int A[], int p, int r);
int MedianOfThree(int A[], int p, int r);
/*Median of Three*/

void quickSort2(int A[], int p, int r) {
	if (p < r) {
		int q = partition2(A, p, r);
		quickSort2(A, p, q-1 );
		quickSort2(A, q , r);
	}
}

int  partition2(int A[], int p, int r) {
	int x = MedianOfThree(A, p, r);	
	int i = p - 1;
	if (i <-1)return 0;
	for (int j = p; j <r; j++) {

		if (A[j] <= x) {
			i ++;
			swap(&A[i], &A[j]);
		}
	}
	swap(&A[i+1], &A[r]);
	return i+1;
}

int MedianOfThree(int A[], int p, int r) {
		int a = A[p];
		int b = A[r];
		int c = A[(int)(p + r) / 2];

		int arr[] = { a,b,c };
		bubbleSort(arr, 3);

		return arr[1];

}