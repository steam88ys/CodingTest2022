#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100] = "coding test";
	char s2[100];
	char s3[100];

	printf("s1 문자열의 길이 : %d", strlen(s1));	// 길이

	strcpy(s2, s1);	// 복사
	printf("%s\n", s2);

	strcat(s2, s1);	// 합치기
	printf("%s\n", s2);

	printf("%d\n", strcmp("high", "school"));	// 비교
	printf("%d\n", strcmp("school", "high"));
	printf("%d\n", strcmp("high", "high"));
}