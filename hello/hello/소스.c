#include <stdio.h>
#pragma warning(disable:4996)
#include <math.h>

int main(){

	int a, b,max;
	scanf("%d %d", &a, &b);
	if (a >= b)
		max = a;
	else max = b;
	printf("큰 수는 %d입니다", max);
	



	
	return 0;

}