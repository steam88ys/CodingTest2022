#include <stdio.h>

int main(void)
{
	int a[10] = {2, 5, 78, 43, -45, 68, 31, 100, 45, 23};
	int max = a[0];
	int posi = 0;
	
	for (int i = 0; i < 10; i++)
	{
		if (max < a[i]) {
			max = a[i];
			posi = (i + 1);
		}
	}

	printf("�ִ밪 : %d, ��ġ : %d", max, posi);

	return 0;
}