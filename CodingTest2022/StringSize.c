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
	//printf("���ڿ��� ���� : %d \t(while�� ���)\n", cnt);

	cnt = 0;
	for (i = 0; i <= cnt; i++) 
	{
		s2[i] = s1[i];
		if (s1[i] == '\0') break;
		cnt++;
	}
	//printf("���ڿ��� ���� : %d \t(for�� ���)", cnt);
	printf("���纻 : %s", s2);
}