#include <stdio.h>
#include <string.h>

int main(void)
{

	char s1[7][10] = { "한국", "미국", "일본", "영국", "독일", "호주", "독일" };
	char key[] = { "독일" };

	for (int i = 0; i < 7; i++) {
		printf("%s \n", s1[i]);
		if (strcmp(s1[i], key) == 0) {
			printf("%d번째 독일이 있습니다.\n", i+1);
			break;
		}
	}
	return 0;

}
	