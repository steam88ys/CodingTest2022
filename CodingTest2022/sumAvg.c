#include <stdio.h>
#include <stdlib.h>
#include <time.h>	// �ð��� ���� �������� �ٸ���

void main(void)
{
	int arr[10], sum = 0;
	double avg = 0;
	srand(time(NULL));	// �������� �ٸ���

	printf("�迭 ��� : ");

	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		arr[i] = (rand()%100)+1;	// 1~100	0~100 => rand()%101
		sum += arr[i];
		printf("%d\t", arr[i]);
	}

	avg = (double) sum / (sizeof(arr)/sizeof(int));

	printf("\n�հ� : %d\n", sum);
	printf("��� : %0.2lf\n", avg);

	return 0;
}