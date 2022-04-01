#include <stdio.h>

int main(void)
{
	char s1[20] = {"coding test"};
	char s2[20];
	int i, j=0;
	int cnt=0;	// 0, \0

	while (1) 
	{
		if (s1[cnt] != '\0') {
			cnt++;
		}
		else break;
	}
	//printf("문자열의 길이 : %d \t(while문 사용)\n", cnt);

	cnt = 0;
	for (i = 0; s1[i] != 0; i++) 
	{
		s2[i] = s1[i];
	}
	s2[i] = 0;
	//printf("문자열의 길이 : %d \t(for문 사용)", cnt);
	printf("복사본 : %s", s2);
}