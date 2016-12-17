//HEADER GOES HERE

#include <quiz.h>

int	help(void)
{
	system("clear");
	ft_putstr("Welcome to the quiz help page\n\n");
	ft_putstr("How to start the game:\n \
	Starting the game only requires one button press 's'.\n\n");
	ft_putstr("How to answer questions:\n \
	To answer questions you are given 4 choices a, b, c, d, choose one.\n\n");
	ft_putstr("How to score points:\n \
	To score points you must answer questions correctly.\n\n");
	ft_putstr("How to win:\n \
	To win you must answer as many questions right as possible. goodluck\n\n");
	ft_putstr("Click the ENTER key to return to the menu page\n");
	getchar();
	return (0);
}
