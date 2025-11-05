#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //scanf(), files i/o
#include <stdlib.h> //standard library
#include <time.h> //for time() function
#include <ctype.h> //for tolower() function

int ExampleFunction(int a,int b); //declare function **REQUIRED** **param vars do not need to match function header
void modify(int val, int* ref);

//int main() {
	/*int x1;//signed
	int x2; //signed
	long long int x3; //signed

	unsigned int x4; //unsigned
	x1 = 13;
	x2 = 5;
	printf("%d %f", x1,(float)(x1 + x2)); //typecasting*/
	//ask user to enter first, last name, and student id
	/*

	char firstName[20], lastName[20]; //store first and last name separately
	int umId;

	printf("Please Enter your first and last name: ");
	scanf("%s %s", firstName, lastName); //will store first and last name, separated by whitespace
	printf("Please Enter your UMID: ");
	scanf(" %d", &umId); //stores UMID

	printf("Your name is: %s %s", firstName, lastName); //prints full name to the terminal
	printf("\nYour UMID is: %d", umId); //starts a new line and prints UMID to the terminal
	*/
	/*
	srand(time(NULL));
	int userMin, userMax, randScore1, randScore2, randScore3;
	float avgScore;
	char finalGrade;

	printf("Enter the test score range, separated by a space: ");
	scanf("%d %d", &userMin, &userMax);

	if (userMin >= 0 && userMax > userMin) {
		randScore1 = rand() % (userMax - userMin + 1) + userMin;
		randScore2 = rand() % (userMax - userMin + 1) + userMin;
		randScore3 = rand() % (userMax - userMin + 1) + userMin;
		printf("Test Scores Generated: %d %d %d\n", randScore1, randScore2, randScore3);

		avgScore = (randScore1+randScore2+randScore3) / 3.0;
		printf("Test Average: %f\n", avgScore);

		if (avgScore >= 0.9*userMax) {
			finalGrade = "A";
		}
		else if (avgScore >= 0.8*userMax) {
			finalGrade = "B";
		}
		else {
			finalGrade = "C";
		}

		printf("Final Grade: %c\n", finalGrade);
	}
	else {
		printf("Invalid input.\n");
	}
	*/
/*
	char day[3];

	printf("enter WEd: ");
	scanf("%s", day);

	printf("%s\n", day);

	for (int i = 0; i < strlen(day); i++) { //convert to lowercase
		printf("%c", tolower(day[i]));
	}

	//int retInt = ExampleFunction(0,10); //call function
*/
	//
	//
	//
	//POINTERS
	/*
	int num1 = 5;
	int num2 = 15;
	int n1 = 10, x1 = 7;
	int numArr[5] = { 20, 20, 40, 50, 60 };
	int *arrPt, *x; //points to designated address
	x = &num2; //x will store address of num2
	arrPt = numArr;

	printf("x value: %d\nx address: %p\n\n", *x, x); //*x is val at address, x is address of num2

	int y = *x; //will be value at x; which is at address of num2
	printf("y: %d\n", y);

	int z = x; //will be address of num2
	printf("z: %p", z); //p for pointer datatype; will output hexadecimal
	//when storing a pointer of an array, arr[0] == p[-1], incrementing both sides by 1
	//double pointers used by n dimensional arrays; p* = row; p** = col
	*/
	/*
	int a = 15, b = 4;
	float result = (float)a / b;
	int x = (a % 3) + 7 * (b / 3);

	printf("Result 1: %.1f\n", result);
	printf("Result 2: %d\n", x);
	
	int v = 5;
	int r = 5;
	modify(v, &r);
	printf("V: %d, R: %d\n", v, r);
	*/
	/*int num1 = 10;
int num2 = 20; 
int* p = &num1;

*p = *p + 5;
p = &num2;
*p = *p - 2;

printf("\nNum1: %d, Num2: %d\n", num1, num2);
	
for (int i = 1; i <= 8; i++) {
	if (i % 3 == 0) {
		continue;
	}
	if (i > 6) {
		break;
	}
	printf("%d", i);
	}
printf("\nEnd.");
	
for (int i = 1; i <= 3; i++) {
	for (int j = 1; j <= i; j++) {
		if (i == 2 && j == 1) {
			printf("X");
		}
		else {
			printf("%d", j);
		}
	}
	}*/
	
	//return 0;

//}

int main() {
	FILE* in; //file pointer 
	in = fopen("data.txt", "r"); //opens data file as read only
	printf("Opened data.txt successfully");

	if (in == NULL) { //checks if data.txt was successfully opened
		perror("data.txt");
		return 1;
	}

	printf("Opened data.txt successfully");
	fclose(in); //closes file

	return 0;
}

int ExampleFunction(int x, int y) { //define function
	for (int i = x; i < y; i++) {
		printf("Hello\n");
	}
	return 0;
}

void modify(int val, int* ref) {
	val += 10;
	*ref = *ref + 10;
}