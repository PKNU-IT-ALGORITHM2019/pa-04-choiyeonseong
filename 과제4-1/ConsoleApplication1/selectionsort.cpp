#include "Çì´õ.h"

void selectionSort(int A[], int n) {
	int k = 0;
	for (int last = n-1; last > 0; last--) {
		int k = last;
		for (int i = 0; i < last; i++) {
			if (A[i] > A[last]) {
				k = i;
				swap(&A[k], &A[last]);
			}
		}	
	}
}