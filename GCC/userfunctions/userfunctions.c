#include <stdio.h>

int _g_number = 434;

void resetGlobal() {
	
	_g_number = 0;
}

int getGlobal() {
	
	return _g_number;
}

int testForBit(int number, unsigned int bit) {
	if (bit >= 32) return -1;
	return (number>>bit)&1;
}

void printBinary(long long int number) {
	for(int i = sizeof(long long int)*8 - 1; i >= 0; i--) {
		printf("%d", number>>i&1);
		if (!(i%8)) printf(" ");
	}
}

int main() {
	printf("Global value is %d\n", getGlobal());
	resetGlobal();
	printf("Global value is now %d\n", getGlobal());
	printf("Bit 23 in number 0x9fe357ca is %d\n", testForBit(0x9fe357ca, 23));
	printf("0x9fe357ca in binary is\n");
	printBinary(0x9fe357ca);
	
	return 0;
}