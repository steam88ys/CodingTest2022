#include <stdio.h>

int main(void)
{
	char color[5][10] = { "red", "green", "blue", "brown", "cyan" };
	int i, j;

	for (i = 0; i < 5; i++) {	// 문자 단위 출력 %s 이용
		printf("%s\n", color[i]);
	}

	for (i = 0; i < 5; i++) {	
		for (j = 0; j < 10; j++) {
			printf("%c  ", color[i][j]);
		}
		printf("\n");
	}

	return 0;
}