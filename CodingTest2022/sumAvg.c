#include <stdio.h>
#include <stdlib.h>
#include <time.h>	// 시간에 따라 랜덤값을 다르게

void main(void)
{
	int arr[10], sum = 0;
	double avg = 0;
	srand(time(NULL));	// 랜덤값을 다르게

	printf("배열 출력 : ");

	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		arr[i] = (rand()%100)+1;	// 1~100	0~100 => rand()%101
		sum += arr[i];
		printf("%d\t", arr[i]);
	}

	avg = (double) sum / (sizeof(arr)/sizeof(int));

	printf("\n합계 : %d\n", sum);
	printf("평균 : %0.2lf\n", avg);

	return 0;
}