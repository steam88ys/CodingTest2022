#include <stdio.h>

int main(void) {

	int score[] = { 89, 98, 76 };

	//�迭 �̸��� �迭 ù��° ������ �ּ�
	printf("score : %u, &score[0] : %u\n", score, &score[0]);

	printf("*score : %d, score[0] : %d\n", *score, score[0]);
	// * == []

	for (int i = 0; i < 3; i++)
		printf("%2d %10u %6d\n", i, (score + i), *(score + i));

	//++*score, *score++, --*score (*score)--
	printf("++*score : %u\n", ++ * score);// 90 = 89 + 1 =  �� + 1
	printf("*score++ : %u\n", *(score + 1));//98 ��(�ּҰ� + 1) = 98  
	printf("--*score: %u\n", --(*score));//89,  90 - 1 89
	printf("(*score)-- : %u\n", (*score)--);//89
	printf("*++score : %u\n", *(score + 1));	// *score++�� �Ȱ���

	return 0;
}