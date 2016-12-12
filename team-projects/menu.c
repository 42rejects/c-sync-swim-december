#include <stdio.h>
#include <unistd.h>

char	USER_OPTIONS(void)
{
	char b;

	write(1, "Start game press s\tview highscore press v\n\n", 46); //options
	write(1, "See Help Screen PRESS h\tExit Program PRESS q\n\n", 48); //options
	write(1, "Where would you like to go: ", 28); //allows standard input
	scanf(" %c", &b);
	while (b) //this loop is meant to check if the input was correct and if not then it shouldnt return the character. it should display the options again
	{
		if (b == 's' || b == 'v' || b == 'h' || b == 'q') //checking for valid options
			write(1, "Nice", 4);
			continue; //if correct skips the recursive call to display options
		else 
			USER_OPTIONS(); //if the response is not valid this will display the options again
	}
}

char	menu(void)
{
	char buf; //buffer
	char selection; //holds selection

	write(1, "\tWELCOME\n", 11); //welcome screen
	write(1, "Press any key to continue: ", 26); //welcome screen or pause
	scanf("%c", &buf); //allows for input
	write(1, "\tTHIS IS QUIZMOZETTE\nMenu\n\n", 29); //sets up menu
	selection = USER_OPTIONS(); // has options and will assign the input to selection
	return (selection); //will return this value
}
