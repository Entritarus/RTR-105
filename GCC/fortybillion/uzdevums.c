#include <stdio.h>

int main() {
	printf("Enter two decimal numbers, that will be multiplied\n");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a * b = %lld\n", (long long int)a*b);
	return 0;
}
