#include <stdio.h>

int main(void)
{
	int a[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int min = a[0];
	int i, minposi = 0;

	for (i = 0; i < 10; i++)
	{
		if (min > a[i]) {
			min = a[i];
			minposi = i;
		}
	}

	printf("최대값 : %d, 위치 : %d", min, ++minposi);

	return 0;
}