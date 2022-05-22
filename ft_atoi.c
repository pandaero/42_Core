/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/22 23:36:57 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function interprets a character string to return an integer type (16-bit).
Returns the integer value of the decimal integer quantity in the string.
Interprets sign. When digits, starts to sum values with base until the end.
*/
#include "libft.h"

static int	ft_isspace(int ch)
{
	if (ch == ' ')
		return (1);
	else if (ch == '\f' || ch == '\n' || ch == '\r'|| ch == '\t' || ch == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + (*str - '0');
		str++;
	}
	return (sign * sum);
}

/* Test | gcc -Wall -Werror -Wextra ft_atoi.c && ./a.out
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	a[] = "+54lasdf";

	printf("Test- str:%s, out:%d\n", a, ft_atoi(a));
	return (0);
}
//*/