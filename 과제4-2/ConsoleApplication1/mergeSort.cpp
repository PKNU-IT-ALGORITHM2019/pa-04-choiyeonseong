#include"헤더.h"

void merge(int data[], int p, int q, int r) {
	int i = p;
	int j = q + 1;
	int k = p;
	int tmp[MAX];
	while (i <= q && j <= r) {
		if (data[i] < data[j])
			tmp[k++] = data[i++];
		else
			tmp[k++] = data[j++];
	}

	//두 while문중 하나만 수행
	while (i <= q)
		tmp[k++] = data[i++];
	while (j <= r)
		tmp[k++] = data[j++];

	for (int i = p; i <= r; i++)
		data[i] = tmp[i];
}

void mergeSort(int data[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}
