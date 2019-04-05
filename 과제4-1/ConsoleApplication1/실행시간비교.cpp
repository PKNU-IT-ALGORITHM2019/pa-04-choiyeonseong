#include "헤더.h"

struct clock {
	clock_t start;
	clock_t end;
	float res;
};
struct Array {
	int* arr = (int *)malloc(MAX * sizeof(int));
};


int main(void) {

	struct Array ra[3][10];	 //랜덤데이터 
	struct Array re[3];	 //역수데이터
	struct clock result; //실행시간 

	int* afterrand = (int *)malloc(MAX * sizeof(int));
	int* afterreve = (int *)malloc(MAX * sizeof(int));
	int N;	//데이터의 개수
	int j;	//N개의 데이터의 배열
	double sum = 0;	//렌덤데이터 실행시간의 합계

	//고정된 데이터 생성
	for (int i = MIN; i <= MAX; i *= 10) {
		int j = 0;
		if (i == 1000) j = 0;
		else if (i == 10000) j = 1;
		else if (i == 100000) j = 2;

		for (int k = 0; k < 10; k++) {		//10개의 렌덤데이터
			RandomData(ra[j][k].arr, i);
		}
	
		ReversedData(re[j].arr, i);
	}

	printf("\t\trandom1000\treverse1000");
	printf("\trandom10000\treverse10000");
	printf("\trandom100000\treverse100000\n");



	/*bubble sort*/
	printf("Bubble\t\t");

	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			bubbleSort(afterrand, N);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}
	
	
		printf("%lf\t",sum/10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		bubbleSort(afterreve, N);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);

	

	}
	printf("\n");




	/*selection sort*/
	printf("Selection\t");
	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			selectionSort(afterrand, N);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		selectionSort(afterreve, N);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);

	}
	printf("\n");


	/*insertion sort*/
	printf("Insertion\t");
	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			insertionSort(afterrand, N);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		insertionSort(afterreve, N);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);

	}
	printf("\n");


	/*Merge sort*/
	printf("Merge\t\t");
	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			mergeSort(afterrand,0, N-1);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		mergeSort(afterreve,0, N-1);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);

	}
	printf("\n");


	/*quick sort1*/
	printf("Quick1\t\t");
	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			quickSort1(afterrand,0, N-1);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		quickSort1(afterreve,0, N-1);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);

	}
	printf("\n");

	/*quick sort2*/
	printf("Quick2\t\t");
	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			quickSort2(afterrand,0, N-1);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		quickSort2(afterreve,0, N-1);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);

	}
	printf("\n");


	/*quick sort3*/
	printf("Quick3\t\t");
	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;
		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			quickSort3(afterrand,0, N-1);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		quickSort3(afterreve, 0,N-1);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);

	}
	printf("\n");


	/*heap sort*/
	printf("Heap\t\t");

	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			heapSort(afterrand, N);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		heapSort(afterreve, N);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);



	}
	printf("\n");



	/*library qsort*/
	printf("Library\t\t");

	for (N = MIN; N <= MAX; N *= 10) {

		if (N == 1000) j = 0;
		else if (N == 10000) j = 1;
		else if (N == 100000) j = 2;

		//랜덤
		for (int k = 0; k < 10; k++) {
			arrcpy(afterrand, ra[j][k].arr, N);

			result.start = clock();
			qsort(afterrand, N,sizeof(int),compare);
			result.end = clock();

			result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;
			sum += result.res;
		}


		printf("%lf\t", sum / 10);
		sum = 0;

		//역순
		arrcpy(afterreve, re[j].arr, N);
		result.start = clock();
		qsort(afterreve, N,sizeof(int),compare);
		result.end = clock();

		result.res = (float)(result.end - result.start) / CLOCKS_PER_SEC;

		printf("%lf\t", result.res);



	}
	printf("\n");

}



