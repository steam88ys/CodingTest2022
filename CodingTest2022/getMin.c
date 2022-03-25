#include <stdio.h>

int main(void)
{
	int a[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int min = a[0];
	int posi = 0;

	for (int i = 0; i < 10; i++)
	{
		if (min > a[i]) {
			min = a[i];
			posi = (i + 1);
		}
	}

	printf("최대값 : %d, 위치 : %d", min, posi);

	return 0;
}