#define A 232
#include <stdio.h>
#include <limits.h>
int main() {
	char a = 10;
	printf("a now (t1) is %d\n",a);
	a = 123;
	printf("a now (t2) is %d\n",a);
	printf("A macro is %d\n", A);
	
	unsigned char myChar = 65;
	printf("hex value of myChar is 0x%x\n",(int)myChar); // %x wants an int
	printf("oct value of myChar is 0%o\n",(int)myChar);
	printf("dec value of myChar is %d\n",(int)myChar);
	printf("a symbol, which matches myChar is %c\n", myChar);

	int myInt = 1337;
	printf("size of myInt is %lu\n", sizeof(myInt));
	printf("minimum and maximum values of int are %d and %d\n",INT_MIN,INT_MAX);

	float myFloat = 3.1415;
	printf("size of myFloat is %lu", sizeof(myFloat));
	printf("myFloat == %f\n", myFloat);
	printf("myFloat == %.6f\n", myFloat);
	printf("myFloat == %.f\n", myFloat);

	double myDouble = 3.1415926535;
	printf("size of myDouble is %lu\n",sizeof(myDouble));
	printf("myDouble == %lf\n", myDouble);
	printf("myDouble == %.12lf\n", myDouble);
	printf("myDouble == %.lf\n", myDouble);
	return 0;
}
