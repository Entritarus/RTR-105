#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) { // swap function for sorting
	int c = *a;
	*a = *b;
	*b = c;
}

int main() {
	printf("How many integers you want to enter?\n");
	int numberOfInts; // also the size of array in number of ints
	scanf("%d",&numberOfInts);
	int *array = (int*)malloc(numberOfInts*sizeof(int)); // a dynamic array to store inputs

	// I want number of ints to be scalable

	for (int i = 0; i < numberOfInts; i++) { // get inputs for user
		printf("Enter integer number %d\n", i);
		scanf("%d",&array[i]);
	}

	//for (int i = 0; i < numberOfInts; i++) { // check if everything is entered correctly
	//	printf("array[%d] = %d\n", i, array[i]);
	//}
	int directionOfSort;
	printf("Specify the direction of sorting: 1 - ascending, 0 - descending\n");
	scanf("%d", &directionOfSort);
	int least, leastIndex;

	if (directionOfSort) { //I used selection sort
		for (int startpos = 0; startpos < numberOfInts; startpos++){ // ascending
			least = array[startpos];
			leastIndex = startpos;
			for (int i = startpos; i < numberOfInts; i++){
				if (array[i]<least) {
					leastIndex = i;
					least = array[i];
				}
			}
			if (leastIndex != startpos)
				swap(&array[startpos],&array[leastIndex]);
		}
	} else {
		for (int startpos = numberOfInts-1; startpos >= 0; startpos--) {// descending
			least = array[startpos];
			leastIndex = startpos;
			for (int i = startpos; i >= 0; i--) {
				if (array[i]<least) {
				leastIndex = i;
				least = array[i];
				}
			}
			if (leastIndex != startpos)
				swap(&array[startpos],&array[leastIndex]);
		}
	}
	printf("\n");
	for (int i = 0; i < numberOfInts; i++) {
		printf("%d\n",array[i]);
	}
	return 0;
}
