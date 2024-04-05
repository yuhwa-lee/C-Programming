#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b == c) printf("+\n");
    if (a - b == c) printf("-\n");
    if (a * b == c) printf("*\n");
    if ((int)a / b == c) printf("/\n");
    if ((a + b) != c && (a - b) != c && (a * b) != c && ((int)a / b) != c) printf("Incorrect");



    return 0;
}