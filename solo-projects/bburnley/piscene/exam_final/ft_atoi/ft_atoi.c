/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:15:46 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 16:13:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skip_whitespace(const char *str, int *i);

void	detect_sign(const char *str, int *i, int *sign);

void	calculate_nbr(int digits[], int digit_count, int sign, int *nbr);

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		digit_count;
	int		digits[23];
	int		ans;

	skip_whitespace(str, &i);
	detect_sign(str, &i, &sign);
	digit_count = 0;
	while ((str[i] > 47) && (str[i] < 58))
		digits[digit_count++] = str[i++] - '0';
	ans = 0;
	if (digit_count > 19)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	calculate_nbr(digits, digit_count, sign, &ans);
	return (ans * sign);
}

void	skip_whitespace(const char *str, int *i)
{
	while ((str[*i] >= 0) && (str[*i] <= 32))
		(*i)++;
}

void	detect_sign(const char *str, int *i, int *sign)
{
	if (str[*i] == 45)
		*sign = -1;
	else
		*sign = 1;
	if ((str[*i] == 45) || (str[*i] == 43))
		(*i)++;
}

void	calculate_nbr(int digits[], int digit_count, int sign, int *nbr)
{
	int long	multiple;
	int			mult_i;
	int			digits_i;
	long int	sum;
	int			flag;

	digits_i = 0;
	sum = 0;
	flag = 0;
	while (digits_i < digit_count)
	{
		multiple = 1;
		mult_i = 0;
		while (mult_i++ < (digit_count - (digits_i + 1)))
			multiple *= 10;
		sum += (digits[digits_i++] * multiple);
		if ((digit_count > 18) && (sum < 0))
		{
			if (sign == 1)
				*nbr = -1;
			else
				*nbr = 0;
			flag = 1;
			break;
		}
	}
	if (!flag)
		*nbr = sum;
}
