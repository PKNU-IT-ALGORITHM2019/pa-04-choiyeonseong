#include "헤더.h"
int  partition1(int A[], int p, int r);
/*마지막 값이 pivot*/

void quickSort1(int A[], int p, int r) {
	if (p < r) {
		int q = partition1(A, p, r);
		quickSort1(A, p, q - 1);
		quickSort1(A, q , r);
	}
}

int  partition1(int A[], int p, int r) {
	int x = A[r];	//pivot
	int i = p - 1;
	if (i <-1)return 0;
	for (int j = p; j < r; j++) {

		if (A[j] <= x) {
			i++;
			swap(&A[i], &A[j]);
		}
	}
	swap(&A[i + 1], &A[r]);
	return i + 1;
}

