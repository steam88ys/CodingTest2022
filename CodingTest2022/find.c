#include <stdio.h>

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i, su;

	printf("1~10���� ���� �Է� : ");
	scanf_s("%d", &su);

	for (i = 0; i < 10; i++)
	{
		if (su == a[i])
			break;
	}

	if (i<10) {
		printf("���� �ֽ��ϴ�.");
	}
	else {
		printf("���� �����ϴ�.");
	}

	return 0;
}