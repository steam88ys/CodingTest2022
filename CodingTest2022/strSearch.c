#include <stdio.h>
#include <string.h>

int main(void)
{

	char s1[7][10] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��", "����" };
	char key[] = { "����" };

	for (int i = 0; i < 7; i++) {
		printf("%s \n", s1[i]);
		if (strcmp(s1[i], key) == 0) {
			printf("%d��° ������ �ֽ��ϴ�.\n", i+1);
			break;
		}
	}
	return 0;

}
	