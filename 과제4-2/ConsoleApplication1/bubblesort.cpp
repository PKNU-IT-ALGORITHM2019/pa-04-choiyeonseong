#include "Çì´õ.h"

void bubbleSort(int A[], int n) {
	for (int last = n; last >0; last--) {
		for (int i = 0; i < last-1; i++) {
			if (A[i] > A[i + 1])
				swap(&A[i], &A[i + 1]);
		}
	}
}