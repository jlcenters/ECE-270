#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>,<stdlib.h>,<time.h> //libraries required for printf(), scanf(), and time()

//P3 A: Rock-Paper-Scissors Tournament; Loop-only in main
/*int main() {
	int rounds = 0, userMove = 0, cpuMove, rockCounter = 0, paperCounter = 0, scissorsCounter = 0, wins = 0, losses = 0, ties = 0;
	srand(time(NULL)); //call random seed to current time

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

	printf("\n\nPLAYER STATS:\nWins: %d, Losses: %d, Ties: %d\nWin rate: %.1f%%\n", wins, losses, ties, ((float)wins/rounds)*100);

	// TODO: frequently used move
	//if statement determines most frequently used player move
	if (rockCounter == paperCounter || rockCounter == scissorsCounter) { //rock matches one
		if (rockCounter == paperCounter && rockCounter == scissorsCounter) { //all 3 used equally
			printf("Rock, Paper, and Scissors used %d times.\n", rockCounter);
		}
		else if (rockCounter == paperCounter) {
			if (rockCounter > scissorsCounter) { //rock and paper used most
				
			}
			else { //scissors used most
				
			}
		}
	}
	else if (paperCounter == scissorsCounter) { //paper matches scissors
		if (paperCounter > rockCounter) {
			//paper and scissors used most
		}
		else {
			//rock used most
		}
	}
	else if (rockCounter > 0) { //rock was used
		if (rockCounter > paperCounter) {
			if (rockCounter > scissorsCounter) {
				//rock used most
			}
			else {
				//scissors
			}
		}
		else { //rock less than paper
			if (paperCounter > scissorsCounter) {
				//paper used most
			}
			else {
				//scissors
			}
		}
	}
	else if (paperCounter > 0) { //paper was used
		if (paperCounter > scissorsCounter) {
			//paper used most
		}
		else {
			//scissors
		}
	}
	else {
		if (scissorsCounter > 0) { //scissors was used
			//scissors used most
		}
		else {
			//no valid input was used
		}
	}

	printf("\nGame OVER\n\n");

	return 0; //exits main()
}*/