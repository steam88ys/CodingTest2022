#include <stdio.h>

int main(void) {

	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	int* p = &m;	// m주소에 n값 넣기
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