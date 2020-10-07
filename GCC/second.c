#include <stdio.h>
#include <limits.h>

int main() {
	unsigned long long int a = 0;
	while (a<ULONG_MAX) {
		printf("%lld\n",a+=10);
	}
	//printf("hello %lld.number\n", test);
	return 0;
}
