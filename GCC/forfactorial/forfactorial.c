#include <stdio.h>
#include <stdlib.h>

int main() {
	void* dataPointer;  // a variable for dynamic memory allocation
	char datatype; // datatype storage
	long long int factorial = 1, prevFactorial = 1; // factorial value behind the scenes
	int faclimit; // loop control
	printf("Enter variable datatype\nc - char\ni - int\nl - long long\n");//ask user for datatype
	scanf("%c", &datatype);
	
	printf("Enter a non-negative integer\n"); // ask for an int
	scanf("%d",&faclimit);
	if(faclimit < 0) { // there's no negative factorials
		printf("Error: invalid input\n");
		return 0;
	}
	switch(datatype) {
		case 'c':
			dataPointer = malloc(sizeof(char)); // allocate a char sized memory chunk
			*((char*)dataPointer) = factorial; // assign 0! value
			for (int iteration = 1; iteration <= faclimit; iteration++) { //loop until iteration is greater than input number
				factorial *= iteration;
				*((char*)dataPointer) = factorial;
				if (*((char*)dataPointer) < factorial||prevFactorial > factorial) { // overflow detection
					printf("Warning: factorial value broken\n");
					break;
				}
				prevFactorial = factorial; // for hidden factorial value control
			}
			printf("%d! == %d", faclimit, *((char*)dataPointer)); // print factorial value
		break;
		
		case 'i':
			dataPointer = malloc(sizeof(int));// allocate an int sized memory chunk
			*((int*)dataPointer) = factorial;// assign 0! value
			for (int iteration = 1; iteration <= faclimit; iteration++) {
				factorial *= iteration;
				*((int*)dataPointer) = factorial;
				if (*((int*)dataPointer) < factorial||prevFactorial > factorial) {// overflow detection
					printf("Warning: factorial value broken\n");
					break;
				}
				prevFactorial = factorial;// for hidden factorial value control
			}
			printf("%d! == %d", faclimit, *((int*)dataPointer));
		break;
		
		case 'l':
			for (int iteration = 1; iteration <= faclimit; iteration++) { // don't allocate anything since hidden factorial value's data type is long long int
				factorial *= iteration;
				if (prevFactorial > factorial) { // detect hidden factorial value overflow
					printf("Warning: factorial value broken\n");
					break;
				}
				prevFactorial = factorial;
			}
			printf("%d! == %lld",faclimit, factorial);
		break;
		
		default:
			printf("Error: invalid input\n"); // detect invalid data type variant
		break;
	}
	
	return 0;
}