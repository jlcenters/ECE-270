#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>,<stdlib.h>,<time.h> //libraries required for printf(), scanf(), and time()


//P3 A: Rock-Paper-Scissors Tournament; Loop only in main
/*
int main() {
	int rounds = 0, userMove = 0, cpuMove, rockCounter = 0, paperCounter = 0, scissorsCounter = 0, wins = 0, losses = 0, ties = 0;
	srand(time(NULL)); //call random seed to current time

	printf("Project 2 Part A:\n");
	printf("\nRPS RULES:\nYou will be prompted to enter 1, 2, or 3 at the start of each round.\n");
	printf("1 = Rock\n2 = Paper\n3 = Scissors\nRock beats Scissors, Paper beats Rock, and Scissors beats Paper.\nIf you and the CPU make the same choice, or you enter an invalid number, you will tie that round.\n\n");

	printf("Please enter the amount of rounds you would like to play: ");
	scanf("%d", &rounds); //stores user input to rounds 

	//if statement validates user input
	if (rounds <= 0) {
		printf("\nNo Rounds.\n");
		return 0; //exits main() and ends program
	}

	//will iterate for the amount of rounds specified by user
	for (int i = 1; i <= rounds; i++) {
		printf("\n\nROUND %d OF %d\n", i, rounds);
		cpuMove = rand() % (3) + 1; //generate 1,2,3

		printf("Enter 1, 2, or 3: ");
		scanf("%d", &userMove); //stores user input to userMove

		if (userMove == cpuMove) { //if moves match, end round as a tie
			ties++;

			if (userMove == 1) {
				rockCounter++;

				printf("\nPLAYER: Rock\nCPU: Rock");
			}
			else if (userMove == 2) {
				paperCounter++;

				printf("\nPLAYER: Paper\nCPU: Paper");

			}
			else {
				scissorsCounter++;

				printf("\nPLAYER: Scissors\nCPU: Scissors");
			}

			printf("\nTIE");
			continue; //continue to next round
		}

		switch (userMove) { //checks user input
		case 1: //rock
			rockCounter++;

			printf("\nPLAYER: Rock");

			//if statement compares CPU value
			if (cpuMove == 3) { //if cpu chose scissors, player wins
				wins++;

				printf("\nCPU: Scissors\nPLAYER WINS");

			}
			else {
				losses++;

				printf("\nCPU: Paper\nCPU WINS");
			}
			break; //exits switch

		case 2: //paper
			paperCounter++;

			printf("\nPLAYER: Paper");

			//if statement compares CPU value
			if (cpuMove == 1) { //if cpu chose rock, player wins
				wins++;

				printf("\nCPU: Rock\nPLAYER WINS");

			}
			else {
				losses++;

				printf("\nCPU: Scissors\nCPU WINS");
			}
			break; //exits switch

		case 3: //scissors
			scissorsCounter++;

			printf("\nPLAYER: Scissors");

			//if statement compares CPU value
			if (cpuMove == 2) { //if cpu chose paper, player wins
				wins++;

				printf("\nCPU: Paper\nPLAYER WINS");

			}
			else {
				losses++;

				printf("\nCPU: Rock\nCPU WINS");
			}
			break; //exits switch

		default: //invalid input
			ties++;

			printf("\nInvalid move, counting as tie.");
			break; //exits switch

		}//end of switch statement

	} //end of for loop

	printf("\n\nPLAYER STATS:\nWins: %d, Losses: %d, Ties: %d\nWin rate: %.1f%%\n", wins, losses, ties, ((float)wins / rounds) * 100);
	printf("\nROCK USED %d TIME(S)\nPAPER USED %d TIME(S)\nSCISSORS USED %d TIME(S)\n", rockCounter, paperCounter, scissorsCounter);

	if (rockCounter == rounds || paperCounter == rounds || scissorsCounter == rounds) {
		if (rockCounter == rounds) {
			printf("Rock used the most.\n");
		}
		else if (paperCounter == rounds) {
			printf("Paper used the most.\n");
		}
		else if (scissorsCounter == rounds) {
			printf("Scissors used the most.\n");
		}
	}
	else if (rockCounter == 0 || paperCounter == 0 || scissorsCounter == 0) {
		if (rockCounter == 0 && paperCounter == 0 && scissorsCounter == 0) {
			printf("No valid inputs received.\n");
		}
		else if (rockCounter == 0) {
			if (paperCounter > scissorsCounter) {
				printf("Paper used the most.\n");
			}
			else {
				printf("Scissors used the most.\n");
			}
		}
		else if (paperCounter == 0) {
			if (rockCounter > scissorsCounter) {
				printf("Rock used the most.\n");
			}
			else {
				printf("Scissors used the most.\n");
			}
		}
		else if (scissorsCounter == 0) {
			if (paperCounter > rockCounter) {
				printf("Paper used the most.\n");
			}
			else {
				printf("Rock used the most.\n");
			}
		}
	}
	else if (rockCounter == paperCounter || rockCounter == scissorsCounter || paperCounter == scissorsCounter) {
		if (rockCounter == paperCounter) {
			if (rockCounter > scissorsCounter) {
				printf("Rock and Paper used the most.\n");
			}
			else if (rockCounter < scissorsCounter) {
				printf("Scissors used the most.\n");
			}
			else {
				printf("Rock, Paper, and Scissors used equally.\n");
			}
		}
		else if (rockCounter == scissorsCounter) {
			if (rockCounter > scissorsCounter) {
				printf("Rock and Scissors used the most.\n");
			}
			else {
				printf("Paper used the most.\n");
			}
		}
		else if (paperCounter == scissorsCounter) {
			if (scissorsCounter > rockCounter) {
				printf("Paper and Scissors used the most.\n");
			}
			else {
				printf("Rock used the most.\n");
			}
		}
	}
	else if (rockCounter > paperCounter || rockCounter > scissorsCounter) {
		if (rockCounter > paperCounter && rockCounter > scissorsCounter) {
			printf("Rock used the most.\n");
		}
		else if (rockCounter > paperCounter) {
			if (paperCounter > scissorsCounter) {
				printf("Rock used the most.\n");
			}
			else {
				printf("Scissors used the most.\n");
			}
		}
		else if (rockCounter > scissorsCounter) {
			if (scissorsCounter > paperCounter) {
				printf("Rock used the most.\n");
			}
			else {
				printf("Paper used the most.\n");
			}
		}
	}
	else if (paperCounter > scissorsCounter) {
		printf("Paper used the most.\n");
	}
	else {
		printf("Scissors used the most.\n");
	}
	

	printf("\nGame OVER\n\n");

	return 0; //end program
}
*/

/*
//P3 B: Rock-Paper-Scissors Tournament; Loop only in helper functions
void rps(int a[], int rounds) {
	int userMove = 0, cpuMove = 0; 

	for (int i = 1; i <= rounds; i++) {
		printf("\n\nROUND %d OF %d\n", i, rounds);
		cpuMove = rand() % (3) + 1; //generate 1,2,3

		printf("Enter 1, 2, or 3: ");
		scanf("%d", &userMove); //stores user input to userMove

		if (userMove == cpuMove) { //if moves match, end round as a tie
			a[5]++;

			if (userMove == 1) {
				a[0]++;

				printf("\nPLAYER: Rock\nCPU: Rock");
			}
			else if (userMove == 2) {
				a[1]++;

				printf("\nPLAYER: Paper\nCPU: Paper");

			}
			else {
				a[2]++;

				printf("\nPLAYER: Scissors\nCPU: Scissors");
			}

			printf("\nTIE");
			continue; //continue to next round
		}

		switch (userMove) { //checks user input
		case 1: //rock
			a[0]++;

			printf("\nPLAYER: Rock");

			//if statement compares CPU value
			if (cpuMove == 3) { //if cpu chose scissors, player wins
				a[3]++;

				printf("\nCPU: Scissors\nPLAYER WINS");

			}
			else {
				a[4]++;

				printf("\nCPU: Paper\nCPU WINS");
			}
			break; //exits switch

		case 2: //paper
			a[1]++;

			printf("\nPLAYER: Paper");

			//if statement compares CPU value
			if (cpuMove == 1) { //if cpu chose rock, player wins
				a[3]++;

				printf("\nCPU: Rock\nPLAYER WINS");

			}
			else {
				a[4]++;

				printf("\nCPU: Scissors\nCPU WINS");
			}
			break; //exits switch

		case 3: //scissors
			a[2]++;

			printf("\nPLAYER: Scissors");

			//if statement compares CPU value
			if (cpuMove == 2) { //if cpu chose paper, player wins
				a[3]++;

				printf("\nCPU: Paper\nPLAYER WINS");

			}
			else {
				a[4]++;

				printf("\nCPU: Rock\nCPU WINS");
			}
			break; //exits switch

		default: //invalid input
			a[5]++;

			printf("\nInvalid move, counting as tie.");
			break; //exits switch

		}//end of switch statement

	} //end of for loop
}
void calculatestats(int a[], int rounds) {
	int rockCounter = a[0];
	int paperCounter = a[1];
	int scissorsCounter = a[2];

	printf("\n\nPLAYER STATS:\nWins: %d, Losses: %d, Ties: %d\nWin rate: %.1f%%\n", a[3], a[4], a[5], ((float)a[3] / rounds) * 100);
	printf("\nROCK USED %d TIME(S)\nPAPER USED %d TIME(S)\nSCISSORS USED %d TIME(S)\n", rockCounter, paperCounter, scissorsCounter);

	if (rockCounter == rounds || paperCounter == rounds || scissorsCounter == rounds) {
		if (rockCounter == rounds) {
			printf("Rock used the most.\n");
		}
		else if (paperCounter == rounds) {
			printf("Paper used the most.\n");
		}
		else if (scissorsCounter == rounds) {
			printf("Scissors used the most.\n");
		}
	}
	else if (rockCounter == 0 || paperCounter == 0 || scissorsCounter == 0) {
		if (rockCounter == 0 && paperCounter == 0 && scissorsCounter == 0) {
			printf("No valid inputs received.\n");
		}
		else if (rockCounter == 0) {
			if (paperCounter > scissorsCounter) {
				printf("Paper used the most.\n");
			}
			else {
				printf("Scissors used the most.\n");
			}
		}
		else if (paperCounter == 0) {
			if (rockCounter > scissorsCounter) {
				printf("Rock used the most.\n");
			}
			else {
				printf("Scissors used the most.\n");
			}
		}
		else if (scissorsCounter == 0) {
			if (paperCounter > rockCounter) {
				printf("Paper used the most.\n");
			}
			else {
				printf("Rock used the most.\n");
			}
		}
	}
	else if (rockCounter == paperCounter || rockCounter == scissorsCounter || paperCounter == scissorsCounter) {
		if (rockCounter == paperCounter) {
			if (rockCounter > scissorsCounter) {
				printf("Rock and Paper used the most.\n");
			}
			else if (rockCounter < scissorsCounter) {
				printf("Scissors used the most.\n");
			}
			else {
				printf("Rock, Paper, and Scissors used equally.\n");
			}
		}
		else if (rockCounter == scissorsCounter) {
			if (rockCounter > scissorsCounter) {
				printf("Rock and Scissors used the most.\n");
			}
			else {
				printf("Paper used the most.\n");
			}
		}
		else if (paperCounter == scissorsCounter) {
			if (scissorsCounter > rockCounter) {
				printf("Paper and Scissors used the most.\n");
			}
			else {
				printf("Rock used the most.\n");
			}
		}
	}
	else if (rockCounter > paperCounter || rockCounter > scissorsCounter) {
		if (rockCounter > paperCounter && rockCounter > scissorsCounter) {
			printf("Rock used the most.\n");
		}
		else if (rockCounter > paperCounter) {
			if (paperCounter > scissorsCounter) {
				printf("Rock used the most.\n");
			}
			else {
				printf("Scissors used the most.\n");
			}
		}
		else if (rockCounter > scissorsCounter) {
			if (scissorsCounter > paperCounter) {
				printf("Rock used the most.\n");
			}
			else {
				printf("Paper used the most.\n");
			}
		}
	}
	else if (paperCounter > scissorsCounter) {
		printf("Paper used the most.\n");
	}
	else {
		printf("Scissors used the most.\n");
	}
}

int main() {
	int rounds = 0;
	int playerstats[] = { 0, 0, 0, 0, 0, 0 }; //rockCounter, paperCounter, scissorsCounter, wins, losses, ties
	srand(time(NULL)); //call random seed to current time

	printf("Project 2 Part B:\n");
	printf("\nRPS RULES:\nYou will be prompted to enter 1, 2, or 3 at the start of each round.\n");
	printf("1 = Rock\n2 = Paper\n3 = Scissors\nRock beats Scissors, Paper beats Rock, and Scissors beats Paper.\nIf you and the CPU make the same choice, or you enter an invalid number, you will tie that round.\n\n");

	printf("Please enter the amount of rounds you would like to play: ");
	scanf("%d", &rounds); //stores user input to rounds 

	//if statement validates user input
	if (rounds <= 0) {
		printf("\nNo Rounds.\n");
		return 0; //exits main() and ends program
	}

	rps(playerstats, rounds);

	calculatestats(playerstats, rounds);

	printf("\nGame OVER\n\n");

	return 0;
}
*/


typedef struct {
	float mass;
} PhysicsData;


int main() {

	int matrix[3][3] = { {1,21,3},{4,15,6},{18,24,31} };
	int count = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix[i][j] % 4 != 0) {
				count++;
			}
		}
	}
	printf("Count: %d\n", count);


	PhysicsData PD;
	PhysicsData* pdptr = &PD;
	PD.mass = 9.8;
	printf("Output: %3.1f\n", pdptr->mass);




	return 0;
}