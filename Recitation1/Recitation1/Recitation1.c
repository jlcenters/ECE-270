#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // .h header file (library) //stdio = standard input output
#include <stdlib.h> //
#include <ctype.h>

//int main(){  main method, instruction to cpu  } //return 0; <---- code to exit program; returns nothing if nonzero is returned, there is an error upon execution
/*
LINK TO C DOCS: https://devdocs.io/c/
printf() <----- from stdio.h; prints to console

int a = 5 <---- declared as int, initialized as 5



















*/
/*
main() {
	

	//scanf() to receive input from user
	//linear equations

	float inMin, inMax, outMin, outMax, m, b, in, out;

	printf("Min/Max Input: ");
	scanf("%f %f", &inMin, &inMax);
	
	printf("Min/Max Output: ");
	scanf("%f %f", &outMin, &outMax);
}*/

//RECITATION WORK
/*int findMax(int x, int y);
float convertToC(float x);
float convertToF(float x);

int main() {
	int a, b, maxNum;
	char conversion;
	float tempGiven, tempConverted;

	//Part 1
	printf("Please enter two numbers: ");
	scanf("%d %d", &a, &b);

	maxNum = findMax(a, b);
	printf("The maximum value is: %d\n", maxNum);


	//Part 2
	printf("Are you converting to Fahrenheit (F) or Celsius (C)?: ");
	scanf(" %c", &conversion);
	conversion = tolower(conversion);

	printf("Please enter temperature to be converted: ");
	scanf("%f", &tempGiven);

	if (conversion == 'c') {
		//convert to celsius
		tempConverted = convertToC(tempGiven);
		printf("%.3f converted to Celsius: %.3f", tempGiven, tempConverted);
	}
	else if (conversion == 'f') {
		//convert to fahrenheit
		tempConverted = convertToF(tempGiven);
		printf("%.3f converted to Fahrenheit: %.3f", tempGiven, tempConverted);
	}
	else {
		printf("Invalid Input.");
	}

	printf("\n");

	return 0;
}

int findMax(int x, int y)
{
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

float convertToC(float given) {
	return ((given - 32) / (1.8));
}

float convertToF(float given) {
	return given * 1.8 + 32;
}*/

//show prof
/*int main() {
	int n=0, nFor=0, sum=0, sumFor=0;

	printf("Enter number: ");
	scanf(" %d", &n);

	nFor = n;

	//WHILE VERSION
	while (n != 0) {
		sum = sum + (n % 10);
		n = n / 10;
	}
	printf("The sum of digits of the number is %d\n", sum);

	//FOR VERSION
	for (; nFor != 0;) {
		sumFor = sumFor + (nFor % 10);
		nFor = nFor / 10;
	}
	printf("The sum of digits of the number is %d\n", sumFor);

}*/











//int main() {
	/*int num = 0, sum = 3;

	printf("Please enter a max value greater than 3: "); //grab max value of summation
	scanf("%d", &num);

	if (num > 3) { //num must be greater than 3 to require loops

		for (int n = 3; (n <= num); n += 3) { //iterates by factor of 3
			if (n == 3) { //first loop starts at 3
				printf("3+");
			}
			else {
				sum += n; //adds n to sum
				printf("%d", n);
				if (n != num) {
					printf("+");
				}
			}

			if (n + 3 > num && n != num) { //if n is a greater value than num, add what is remaining before exiting loop
				sum += num - n;
				printf("%d", num - n);
			}
		}
		printf("=%d\n", sum); //print sum
	}
	else if (num == 3) { //if num is 3, print 3
		sum = 3;
		printf("3=3\n");
	}
	else { //if num is less than 3, invalid input
		printf("Invalid Input.\n");
	}*/

//}