#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice, i, p, m;
	char p1, p2 , S , D;
	int password;
	int lock_password = 0;
	int confirm;
	int guess;
	int correct_guess;
	int final_guess = 0;
	int ultimatum;
	int another_game;
	int player1 =0, player2 =0;
	printf("Welcome to The Cryptographic Vault! \n");
	printf("Press 1 to Start the Game. \n");
	printf("Press 2 to Exit \n");
	scanf("%d", &choice);
	
	do{
			 lock_password = 0;
			 final_guess = 0;
	switch(choice){
		case 1:
			printf("You chose to Start the Game \n");
			printf("READ CAREFULLY!\n==============INSTRUCTIONS==============\n");
			printf("Player 1 (P1) will choose a 5 digit number. Player 2 (P2) will have to guess that number.\n");
			printf("For each number, player 2 will have 5 tries to guess. If he guesses correctly, the game will advance \nand player 2 will move onto the next number. \n");
			printf("Guess all 5 numbers correctly to win the game. \n");
			while(1){
				printf("Player 1 press S to start\n");
				scanf(" %c", &p1);

			if(p1 != 'S'){
				printf("ENTER CORRECT KEY TO BEGIN \n");
				continue;
			}
			else
			{
		 		printf("Player 1 confirmed. \n");
			}

				printf("Player 2 press D to start \n");
				scanf(" %c", &p2);

			if(p2 != 'D'){
				printf("ENTER CORRECT KEY TO BEGIN \n");
				continue;
			}
			else
				{
				printf("Player 2 confirmed. \n");
				}

				break;
			}
			for(i=1; i<=5; i++){
			printf("Player 1 type the encrypted vault code. The numbers should be between 1-9\n");
			printf("This is digit no. %d\n", i);
			scanf("%d", &password);
			if(password<1 || password>9){
				printf("Enter Valid number\n");
				i--;
			}
			else {
			printf("Do you want to confirm this digit? (1=Yes , 0= No)\n");
			scanf("%d", &confirm);
			if(confirm == 1){
				lock_password = lock_password * 10 + password;
				printf("Digit successfully confirmed.\n");
			}
			else if(confirm == 0){
				printf("Choose a new digit.\n");
				i--;
				continue;
			}
			else{
				printf("Choose a valid input.\n");
				i--;
			}
			
			}
			}
			printf("Your confirmed safecode is %d\n", lock_password);
			for(m=1; m<=30 ; m++){
			printf("\n");	
			}
			printf("Player 2 start guessing.\n");
			for(p=1 ; p<=5; p++){
			printf("Enter your guess no. %d\n", p);
			scanf("%d", &guess);
		    if(guess < 1 || guess > 9){
            printf("Enter Valid number\n");
            p--;
            continue;
            }
			printf("Are you Sure?(1=Yes , 0=No)\n");
			scanf("%d", &correct_guess);
			if(correct_guess != 1){
				printf("Guess Again. \n");
				p--;
				continue;
			}
			else{
				final_guess = (final_guess * 10) + guess;
				printf("\n===============  Movvvvvvingggggg Onnnnn To the Next Oneeeee!  ===============\n");
			}
			}
			printf("Are you sure you want to enter this code : %d (1 = Yes , 0 = No)", final_guess);
			scanf("%d", &ultimatum);
		while(ultimatum != 1){

    final_guess = 0;

    printf("Check again buddy. We don't have the whole day!\n");

    for(p=1; p<=5; p++){

        printf("Enter your guess no. %d\n", p);
        scanf("%d", &guess);

        if(guess < 1 || guess > 9){
            printf("Enter Valid number\n");
            p--;
            continue;
        }

        printf("Are you Sure?(1=Yes , 0=No)\n");
        scanf("%d", &correct_guess);

        if(correct_guess != 1){
            printf("Guess Again.\n");
            p--;
            continue;
        }

        final_guess = (final_guess * 10) + guess;
    }

    printf("Are you sure you want to enter this code : %d (1 = Yes , 0 = No)", final_guess);
    scanf("%d", &ultimatum);
}
if(final_guess == lock_password){
    player2++;
    printf("\n========== CONGRATULATIONS YOU WON!!!! CELEBRATION TIME !!!!! ==========\n");
}
else{
    player1++;
    printf("\n========== YOU LOST!!! BETTER LUCK NEXT TIME LOSER !!!!!! ==========\n");
}
			printf("\n==========  TOTAL SUMMARY  ==========\n");
			printf("Player 1 : %d points. \n", player1);
			printf("Player 2 : %d points. \n", player2);
			printf("Do you want to play another game? (1 = Yes, 0 = No)\n");
			scanf("%d", &another_game);
			if(another_game != 1){
			printf("You chose to Exit. \n");
			printf("Thank you for playing my Game. \n");
			}
			
			
			break;
	
		case 2:
			printf("You chose to Exit. \n");
			printf("Thank you for playing my Game. \n");
			break;
	
		default:
		printf("Enter Valid Input. \n");
		break;
	}

}
while(another_game == 1);
	return 0;
}

