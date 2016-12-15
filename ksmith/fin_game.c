#include "juk3.h"

/*this builds the data struct and sets the questions with correct response expected
 **
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
		.question = "Question 1: Do you even lift?\n"
			"a)Yes I lift!\n"
			"b)No\n"
			"c)Maybe\n"
			"d)Cat videos\n",
		.correct = 'a'
	},
	[1] =
	{
		.question = "Question 2: This is a question?\n"
			"a)Yes it is!\n"
			"b)Not really\n"
			"c)Maybe\n"
			"d)Cat videos\n",
		.correct = 'a'
	},
	[2] =
	{
		.question = "Question 3: Will you win the game?\n"
			"a)Yes\n"
		   	"b)No\n"
		   	"c)Maybe\n"
			"d)Cats\n",
		.correct = 'a'
	},
	[3] =
	{
		.question = "Questions 4: How many roads must a man walk down?\n"
			"a)Men drive they don't walk\n"
			"b)42\n"
			"c)too many\n"
			"d)as many as it takes to become a man\n",
		.correct = 'b'
	},
	[4] =
	{
		.question = "Question 5: Where is Waldo?\n"
			"a)He is always in the last place you look\n"
			"b)over there\n"
			"c)I dont know\n"
			"d)maybe he is in the bathroom\n",
		.correct = 'a'
	},
	[5] =
	{
		.question = "Question 6: Where they do that at?\n"
			"a)here apparently\n"
			"b)idk\n"
			"c)what?\n"
			"d)Cat videos\n",
		.correct = 'a'
	},
	[6] =
	{
		.question = "Question 7: When will the Cubs win the series again?\n"
			"a)next year\n"
			"b)2019\n"
			"c)2028\n"
			"d)never\n",
		.correct = 'b'
	},
	[7] =
	{
		.question = "Question 8: How many bytes in a burrito?\n"
			"a)8\n"
			"b)it's food there are no bytes\n"
			"c)depends, can I see the source code\n"
			"d)1024\n",
		.correct = 'b'
	},
	[8] =
	{
		.question = "Question 9: Who is the guy in that one movie?\n"
			"a)Batman\n"
			"b)Chuck Norris\n"
			"c)Bane\n"
			"d)Me\n",
		.correct = 'b'
	},
	[9] =
	{
		.question = "Question 10: Is there a new processor coming out this year?\n"
			"a)its already out\n"
			"b)nope, intel is lazy\n"
			"c)Cat videos\n"
			"d)Shark!!!\n",
		.correct = 'a'
	},
};

/*start of game function
* *here the questions from the struct above are iterated
*/

int		game(void)
{
	int i;
	int j;
	int ans;
	char c;

	i = 0;
	j = 0;
	system("clear");
	while (i < 10)
	{
		ft_putchar('\n');
		ft_putstr(quiz[i].question);
		ft_putchar('\n');
		ft_putstr("Your response: ");
		ans = getchar();
		while ((c = getchar()) != '\n' && c != EOF){}
		ft_putchar('\n');
		system("clear");

/*checks if the response matches what the struct says it should be.
**
*/

		if (ans == quiz[i].correct)
		{
			if (i == 9)
			{
				return(10);
			}
			i++;
			ft_putstr(" Your current score is: ");
			ft_putnbr(i);
			ft_putchar('\n');
			j++;
		}
		else if (ans >= 'a' && ans <= 'd')
			return (i);
	}
	return (0);
}
