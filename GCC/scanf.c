#include <stdio.h>

int main() {
	char a;
	printf("Please enter a letter... ");
	scanf("%c",&a);
	printf("You've entered %c\n", a);
	printf("a in dec == %d\n", a);
	printf("a in hex == 0x%x\n", (unsigned int)a);
	printf("a in oct == 0%o\n", (unsigned int)a);
	
	int myInt;
	printf("Please enter an integer... ");
	scanf("%d",&myInt);
	printf("You've entered %d\n", myInt);
	printf("myInt in dec == %d\n", myInt);
	printf("myInt in hex == 0x%x\n", (unsigned int)myInt);
	printf("myInt in oct == 0%o\n", (unsigned int)myInt);

	float myFloat;
	printf("Please enter a float... ");
	scanf("%f",&myFloat);
	printf("You've entered %f\n", myFloat);
	printf("myFloat in dec == %d\n", (int)myFloat);
	printf("myFloat in hex == 0x%x\n", (unsigned int)myFloat);
	printf("myFloat in oct == 0%o\n", (unsigned int)myFloat);
	
	return 0;
}
