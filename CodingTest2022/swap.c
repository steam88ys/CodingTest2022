#include <stdio.h>

int main(void) {

	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);	// 100 200

	// ���� m�� n�� ������� �ʰ� �� ������ ���� ��ȯ
	int* p = &m;	
	dummy = *p;		// *p == m		dummy = m
	*p = n;			// m���� n�� ����
	p = &n;			// �����Ͱ� n�� ����Ŵ 
	*p = dummy;		// n���� m�� ����

	/*dummy = m;
	m = n;
	n = dummy;*/

	printf("%d %d\n", m, n);	// 200 100
	
	return 0;

}