#include <stdio.h>

int main(void) {

	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);	// 100 200

	// 변수 m과 n을 사용하지 않고 두 변수를 서로 교환
	int* p = &m;	
	dummy = *p;		// *p == m		dummy = m
	*p = n;			// m값에 n을 저장
	p = &n;			// 포인터가 n값 가리킴 
	*p = dummy;		// n값에 m을 저장

	/*dummy = m;
	m = n;
	n = dummy;*/

	printf("%d %d\n", m, n);	// 200 100
	
	return 0;

}