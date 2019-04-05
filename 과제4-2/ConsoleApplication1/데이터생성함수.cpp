#include "Çì´õ.h"


void RandomData(int data[], int N) {
	for (int i = 0; i < N; i++) {
		data[i] = rand() % (N - 1);
	}
}

void ReversedData(int data[], int N) {
	for (int i = 0; i<N; i++) {
		data[i] = N - i;
	}
}

void arrcpy(int data1[], int data2[], int N) {
	for (int i = 0; i < N; i++) {
		data1[i] = data2[i];
	}
}