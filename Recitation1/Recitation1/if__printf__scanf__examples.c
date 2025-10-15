#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main() {
	printf("PART ONE\n");
	int userNum; //value is used throughout the program for user inputs

	printf("Please enter a number: ");
	scanf("%d", &userNum); //store user number

	//if statement will output whether userNum is even or odd
	if (userNum % 2) { //if mod is 1, num is odd
		printf("%d is an odd number.\n", userNum);
	}
	else { //else, num is even
		printf("%d is an even number.\n", userNum);
	}
	// 
	// 
	// 
	printf("\nPART TWO\n");
	srand(time(NULL)); //generate seed based on time of run
	int randVal = rand() % (10) + 1; //value is also used in part 5
	printf("A random number has been generated within the interval [1,10]. Please guess this value : ");
	scanf("%d", &userNum); //store user number

	//if statement will determine and output if the user's estimated value is correct
	if (userNum == randVal) { //if userNum equals generated value, user estimation is correct
		printf("%d is the correct value.\n", userNum);
	}
	else { //else, estimation is incorrect; print correct value for reference. 
		printf("%d is incorrect. The correct value is %d\n", userNum, randVal);
	}
	// 
	// 
	// 
	printf("\nPART THREE\n");
	printf("Please enter a test score within the interval [0,100]: ");
	scanf("%d", &userNum);//store user number

	//if statement will determine and output letter grade based on userNum
	if (userNum <= 100 && userNum >= 0) { //first, check to make sure userNum is a valid number
		if (userNum >= 90) { //if at least 90, output A
			printf("%d%% is an A.\n", userNum);
		}
		else if (userNum >= 80) { //if at least 80 but under 90, output B
			printf("%d%% is a B.\n", userNum);
		}
		else if (userNum >= 70) { //if at least 70 but under 80, output C
			printf("%d%% is a C.\n", userNum);
		}
		else if (userNum >= 60) { //if at least 60 but under 70, output D
			printf("%d%% is a D.\n", userNum);
		}
		else if (userNum >= 50) { //if at least 50 but under 60, output E
			printf("%d%% is an E.\n", userNum);
		}
		else { //if below 50, output F
			printf("%d%% is an F.\n", userNum);
		}
	}
	else { //if userNum is not valid, output error message
		printf("Invalid Score\n");
	}
	// 
	// 
	// 
	printf("\nPART FOUR\n");
	int num1, num2;
	printf("Please enter two integers separated by a space: ");
	scanf("%d %d", &num1, &num2); //store 2 numbers from user

	//if statement will output if num1 and num2 are equal, OR that which is greater
	if (num1 == num2) { //executes only if they are equal
		printf("Both integers are %d.\n", num1);
	}
	else if (num1 > num2) { //executes num1 is larger
		printf("%d is larger than %d.\n", num1, num2);
	}
	else { //executes if num2 is larger
		printf("%d is larger than %d.\n", num2, num1);
	}
	// 
	// 
	// 
	printf("\nPART FIVE\n");
	char userChar, randCharUC, randCharLC; //UC-> uppercase; LC-> lowercase; implemented for user convenience

	randVal = rand() % (100) + 1; //generate random number in [1,100]
	//if statement will determine if randVal is even or odd and assigns respective value to randCharUC and randCharLC
	if (randVal % 2) { //if mod is 1, randVal is odd
		randCharUC = 'O';
		randCharLC = 'o';
	}
	else {
		randCharUC = 'E';
		randCharLC = 'e';
	}

	printf("A random number has been generated. Please guess if the value is even (E) or odd (O): ");
	scanf(" %c", &userChar); //store user input

	//if statement will check if user guessed correctly, and output this, as well as randVal for reference
	if (userChar == 'E' || userChar == 'e' || userChar == 'O' || userChar == 'o') { //check if user value is valid
		if (userChar == randCharUC || userChar == randCharLC) { //check if user value matches uppercase or lowercase real value
			printf("Correct. ");
		}
		else { //output message telling user they were wrong
			printf("Incorrect. ");
		}
		printf("Number Generated: %d.\n", num1); //output generated value
	}
	else { //if userChar is not valid, output error message
		printf("Invalid Input.\n");
	}

	return 0; //exit main()
}*/