#include <stdio.h>

int main(void)
{
	int a[10] = {2, 5, 78, 43, -45, 68, 31, 100, 45, 23};
	int max = a[0], min = a[0];
	int i,  maxposi, minposi;
	
	for (i = 0; i < 10; i++)
	{
		if (max < a[i]) {	// max���� i��° ���� ��
			max = a[i];		// max���� ū i��° ���� ����
			maxposi = i;	// ��ġ ���
		}
		if (min > a[i]) {	// min���� i��° ���� ��
			min = a[i];		// min���� ���� i��° ���� ����
			minposi = i;	// ��ġ ���
		}
	}

	printf("�ִ밪 : %d, ��ġ : %d \n�ּҰ� : %d, ��ġ : %d", max, ++maxposi, min, ++minposi);

	return 0;
}