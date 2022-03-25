#include <stdio.h>

int main(void)
{
	int a[10] = {2, 5, 78, 43, -45, 68, 31, 100, 45, 23};
	int max = a[0], min = a[0];
	int i,  maxposi, minposi;
	
	for (i = 0; i < 10; i++)
	{
		if (max < a[i]) {	// max값과 i번째 숫자 비교
			max = a[i];		// max보다 큰 i번째 숫자 선택
			maxposi = i;	// 위치 기록
		}
		if (min > a[i]) {	// min값과 i번째 숫자 비교
			min = a[i];		// min보다 작은 i번째 숫자 선택
			minposi = i;	// 위치 기록
		}
	}

	printf("최대값 : %d, 위치 : %d \n최소값 : %d, 위치 : %d", max, ++maxposi, min, ++minposi);

	return 0;
}