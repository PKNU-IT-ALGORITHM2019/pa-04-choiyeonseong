#include "Çì´õ.h"

void insertionSort(int A[], int n) {
	int j;
	for (int i = 1; i < n; i++) {
		int tmp = A[i];
		for ( j = i - 1; j>=0; j--) {
			if (A[j] > tmp)
				A[j+1]=A[j];
			else break;
		}
		A[j+1] = tmp;
	}
}