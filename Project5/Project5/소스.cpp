#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int N, M, m;
	scanf("%d", &N);
	scanf("%d", &M);
	if (N = M) printf("RIGHT");
	else {
		if (M < N) printf("UP");
		else if (M > N) printf("DOWN");
		scanf("%d", &m);
		if (m < N) printf("UP");
		else if (m > N) printf("DOWN");


        return 0;
    }