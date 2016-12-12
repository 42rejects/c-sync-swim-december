/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   main.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/12 03:07:50            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/12 03:11:08                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */

#include "juk3.h"

/*
** this builds the data struct and sets the questions with correct response expected
*/

struct		quiz_data
{
	char *question;
	int correct;
};

struct quiz_data quiz[] =
{
	[0] =
	{
		.question = "Question 1: According to wikipedia what was the most watched video of 2012?\n"
			"a)See You Again by Whiz Khalifa\n"
			"b)Sugar by Maroon 5\n"
			"c)Gangnam Style by Psy\n"
			"d)Wheels on the Bus by LittleBabyBum\n",
		.correct = 'c'
	},
	[1] =
	{
		.question = "Question 2: What is the most endangered bird in the world?\n"
			"a)Pink Flamingo\n"
			"b)Kakapo Parrot\n"
			"c)Jamaican Tucan\n"
			"d)North American Pheasant\n",
		.correct = 'b'
	},
	[2] =
	{
		.question = "Question 3: What is the ascii dec value of d?\n"
			"a)97\n"
		   	"b)98\n"
		   	"c)99\n"
			"d)100\n",
		.correct = 'd'
	},
	[3] =
	{
		.question = "Question 4: What libray header does the function getchar use?\n"
			"a)stdlib.h\n"
			"b)42.h\n"
			"c)string.h\n"
			"d)stdio.h\n",
		.correct = 'd'
	},
	[4] =
	{
		.question = "Question 5: What is the equivalent of i *= 5?\n"
			"a)i + 5 = * 2\n"
			"b)i = i * 5\n"
			"c)i * 5 * i =\n"
			"d)i = * 5 =\n",
		.correct = 'b'
	},
	[5] =
	{
		.question = "Question 6: According to Norme @ 42 can you use for loops?\n"
			"a)No\n"
			"b)Yes\n"
			"c)Depends how you use it\n"
			"d)Only in the main function\n",
		.correct = 'a'
	},
	[6] =
	{
		.question = "Question 7: What does malloc do in C programming?\n"
			"a)maximize all open calls\n"
			"b)mix all open circuits\n"
			"c)memory all open channels\n"
			"d)allocate memory\n",
		.correct = 'd'
	},
	[7] =
	{
		.question = "Question 8: What would this snippet of code do if executed properly - free()?\n"
			"a)free memory allocated\n"
			"b)unset previously bound parameters\n"
			"c)free up space on the harddrive\n"
			"d)let any process go that wanted to be free\n",
		.correct = 'a'
	},
	[8] =
	{
		.question = "Question 9: Who is the French billionaire that started 42 school\n"
			"a)Liliane Bettencourt\n"
			"b)Francois Pinault\n"
			"c)Xavier Niel\n"
			"d)Serge Dassault\n",
		.correct = 'c'
	},
	[9] =
	{
		.question = "Question 10: What is the meaning of life?\n"
			"a)Pizza\n"
			"b)42\n"
			"c)Cat Videos\n"
			"d)Money\n",
		.correct = 'b'
	},
};

/*
** this is the start of the game function where it iterates through the questions
*/

int		game(void)
{
	system("clear");
	int i;
	int j;
	int ans;
	char cxq;

	i = 0;
	j = 0;
	while (i < 10)
	{
		ft_putchar('\n');
		ft_putstr(quiz[i].question);
		ft_putchar('\n');
		ft_putstr("Your response: ");
		ans = getchar();
		if ((cxq = getchar()) != '\n' && cxq != EOF){}
		ft_putchar('\n');
		system("clear");

/*
** here the answers are checked against the struct ".correct" to see if the user entered the correct response
*/

		if (ans == quiz[i].correct)
		{
			if (i == 9)
			{
				ft_putstr("You got all 10 right!\n");
				break;
			}
			i++;
			ft_putstr(" Your current score is: ");
			ft_putnbr(i);
			ft_putchar('\n');
			j++;
		}
		else if (ans >= 'a' && ans <= 'd')
		{
			ft_putstr("Unfortunately you're wrong! GAME OVER!\n");
			ft_putstr("You got a high score of: ");
			ft_putnbr(i);
			ft_putchar('\n');
			break;
		}
	}
	return (0);
}
