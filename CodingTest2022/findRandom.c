#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i, su, posi=0;
	srand(time(NULL));

	su = (rand() % 10) + 1;
	printf("%d", su);

	for (i = 0; i < 10; i++)
	{
		if (su == a[i]) {
			posi = i;
			break;
		}
	}

	if (i < 10) {
		printf("값이 %d번째 위치에 있습니다.", ++posi);
	}
	else {
		printf("값이 없습니다.");
	}

	return 0;
}