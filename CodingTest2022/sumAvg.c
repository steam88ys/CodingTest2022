#include <stdio.h>

void main(void)
{
	int arr[10], sum = 0;
	double average = 0;

	printf("�迭 ��� : ");

	for (int i = 0; i < 10; i++) {
		arr[i] = rand()%100+1;
		printf("%d\t", arr[i]);
		sum += arr[i];
	}

	average = (double) sum / (sizeof(arr)/sizeof(int));

	printf("\n�հ� : %d\n��� : %0.2f\n", sum, average);

	return 0;
}