#include <stdio.h>

void display(int length, char ch);
int isEven(int n);

// �־��� ���̸�ŭ �־��� ���� ����ϴ� �Լ�
void display(int len, char ch) {
	for (int i = 0; i < len; i++) {
		printf("%c", ch);
	}
}

// 2�� ������� �ƴ��� �Ǻ��ϴ� �Լ�
int isEven(int n) {
	return (n % 2 == 0 ? 1 : 0);
}

int main(void){

	display(20, '#');

	if (isEven(3) == 1) printf("\n¦���Դϴ�.");
	else  printf("\nȦ���Դϴ�.");
	
	return 0;

}