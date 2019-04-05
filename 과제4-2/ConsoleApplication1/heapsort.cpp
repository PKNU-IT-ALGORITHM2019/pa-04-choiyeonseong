#include "Çì´õ.h"

#define parent(x) (x-1)/2

void heap(int *data, int num) {
	for (int i = 1; i < num; i++) {
		int child = i;
		while (child > 0) {
			int root = parent(child);
			if (data[root] < data[child]) {
				swap(&data[root], &data[child]);
			}
			child = root;
		}
	}
}

void heapSort(int *data, int num) {
	heap(data, num);

	for (int i = num - 1; i >= 0; i--) {
		swap(&data[i], &data[0]);

		heap(data, i);
	}
}