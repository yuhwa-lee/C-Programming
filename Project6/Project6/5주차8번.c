#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int k, e, m;
	double avg;

	scanf("%d %d %d", &k, &e, &m);
	avg = (k + e + m) / 3;
	if (avg >= 91.5) printf("A");
	else if (avg >= 85.5) printf("B");
	else if (avg >= 80.5) printf("C");
	else printf("F");

	if (k == 100 || e == 100 || m == 100) printf("GOOD");
	if (k < 60 || e < 60 || m < 60) printf("BAD");



	return 0;
}