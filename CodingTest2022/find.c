#include <stdio.h>

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i, su;

	printf("1~10사이 숫자 입력 : ");
	scanf_s("%d", &su);

	for (i = 0; i < 10; i++)
	{
		if (su == a[i])
			break;
	}

	if (i<10) {
		printf("값이 있습니다.");
	}
	else {
		printf("값이 없습니다.");
	}

	return 0;
}