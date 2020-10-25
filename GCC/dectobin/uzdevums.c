#include <stdio.h>
void recPrintBin(int number, int pos) {// recursively prints number in binary
	if (pos >= 0) { // there's no negative positions in binary numbers
		printf("%d",(number&(1<<pos))?1:0); // if a bit in number is 1, then it will print "1", otherwise "0"
		recPrintBin(number, pos-1); // call the function again going down to 0th bit
	}
}
int main() {
	printf("Enter a decimal number to convert into binary (min = -2 147 483 648, max = 2 147 483 647)\n");
	int number;
	scanf("%d", &number);
	printf("Number %d in binary is \n", number);
	recPrintBin(number, 31); //start from 31st bit and go down to 0th bit
	printf("\n");
	return 0;
}
