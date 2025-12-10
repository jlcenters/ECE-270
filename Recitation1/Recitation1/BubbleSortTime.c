#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>, <stdlib.h>, <time.h>

void printarray(int a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d", a[i]);
	}
}

int main() {
	srand(97479569); //random seed used is 
	bool sort = true; //will be used for potential restarts
	int arr[] = { 1, 9, 10, 3, 3, 8, 100, 7, 2 }; //static array of max size
	printf("Hello");




	//program will perform at least once
	do {
		//prompt user for size between 100, 200, 300, and 1000 (use 5, 10, and 15 while testing)
		int size = 9; //TODO: size will be what user enters iff it is one of the above options
		//using size obtained above, fill each element with randomly generated number within [0,2000]

		//print unsorted array
		printarray(arr, size);

		//sort array using bubble sort algorithm
		//bubble sort will take an element, compare in order, and will swap places if there is a larger element. 
		//will sort from smallest to largest
		//method: nested for loops

		//print sorted array
		printarray(arr, size);
		//print time spent sorting with the clock() function

		//ask user if they would like to sort another array
		if (/*yes not entered*/) {
			sort = false;
			printf("Yes was not entered, exiting program.")
		}


		sort = false;//TODO: remove
	} while (sort); //program will restart if sort is set to true (user wants to sort again)


	//end program
	return 0;
}



