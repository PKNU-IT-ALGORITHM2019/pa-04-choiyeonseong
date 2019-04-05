#include "헤더.h"
int  partition3(int A[], int p, int r);
/*pivot을 랜덤으로 선택*/

void quickSort3(int A[], int p, int r) {
	if (p < r) {
		int q = partition3(A, p, r);
		quickSort3(A, p, q-1 );
		quickSort3(A, q , r);
	}
}

int  partition3(int A[], int p, int r) {
	int pivotindex = p+1+(rand() % (r - p+1));	//pivotindex;
	int x = A[pivotindex];		//pivot
	int i = p - 1;
	if (i < -1)return 0;
	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			i++;
			swap(&A[i], &A[j]);
		}
	}
	swap(&A[i + 1], &A[r]);
	return i + 1;
}


