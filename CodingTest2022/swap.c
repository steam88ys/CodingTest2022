#include <stdio.h>

int main(void) {

	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	int* p = &m;	// m�ּҿ� n�� �ֱ�
	dummy = *p;
	*p = n;

	p = &n;
	*p = dummy;

	/*dummy = m;
	m = n;
	n = dummy;*/

	printf("%d %d\n", m, n);
	
	return 0;

}