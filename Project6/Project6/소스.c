#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int N, M, m;
	scanf("%d", &N);
	scanf("%d", &M);
	if (N == M) printf("RIGHT");
	else {
		if (M < N) printf("UP\n");
		else if (M > N) printf("DOWN\n");
		scanf("%d", &m);
		if (m < N) printf("UP");
		else if (m > N) printf("DOWN");
		else printf("RIGHT");

		return 0;
	}
}