// "Simple betting game"
// "Jack Queen King" - computer shuffles these cards
// player has to guess the position of the queen.
// if he wins, he takes away 3x the amount he bet.
// if he loses, he loses the bet amount.
// player has $100 initially

#include <stdio.h>
#include <stdlib.h>

int cash = 100;

void Play(int bet) {
	char C[3] = {'J', 'K', 'Q'};
	printf("Shuffling...\n");
	srand(time(NULL));	// seed RNG
	int i;
	for (i = 0; i < 5; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = C[x];
		
		C[x] = C[y];
		C[y] = temp;	// swaps characters at positions x and y
	}
	int playerGuess;
	printf("What's the position of the Queen - 1, 2, or 3? ");
	scanf("%d",&playerGuess);
	if (C[playerGuess - 1] == 'Q') {
		cash += 3*bet;
		printf("You Win! Result = %c%c%c Total Cash = %d\n",C[0],C[1],C[2],cash);
	}
	else {
		cash -= bet;
		printf("You Lose! Result = %c%c%c Total Cash = %d\n",C[0],C[1],C[2],cash);
	}
}

int main()
{
	int bet;
	while (cash > 0) {
		printf("What'syour bet? $");
		scanf("%d", &bet);
		if (bet == 0 || bet > cash) break;
		Play(bet);
	}
}
