#include <stdio.h>

void display(int length, char ch);
int isEven(int n);

// 주어진 길이만큼 주어진 문자 출력하는 함수
void display(int len, char ch) {
	for (int i = 0; i < len; i++) {
		printf("%c", ch);
	}
}

// 2의 배수인지 아닌지 판별하는 함수
int isEven(int n) {
	return (n % 2 == 0 ? 1 : 0);
}

int main(void){

	display(20, '#');

	if (isEven(3) == 1) printf("\n짝수입니다.");
	else  printf("\n홀수입니다.");
	
	return 0;

}