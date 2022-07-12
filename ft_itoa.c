/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_template.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/20 13:08:12 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function writes an integer value to a character string.
Function returns the character string.
Function gets number of digits, takes into account sign, and loops modulus/div.
*/
#include <stdlib.h>

//Function counts number of digits contained in integer, excluding sign
static unsigned int	ft_digs(int n)
{
	unsigned int	digs;

	digs = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		digs++;
	}	
	return (digs);
}

//Function writes integer as character string to determined string.
static char	*ft_revwrite(char *str, int n, unsigned int digs)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		digs += 1;
	}
	str[digs] = '\0';
	while (n > 0)
	{
		digs--;
		str[digs] = n % 10;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;

	if (n > 0)
		str = malloc((ft_digs(n) + 1) * sizeof(char *));
	else if (n < 0)
		str = malloc((ft_digs(n) + 2) * sizeof(char *));
	ft_revwrite(str, n, ft_digs(n));
	return (str);
}

//* Test | gcc -Wall -Werror -Wextra ft_itoa.c && ./a.out
#include <stdio.h>

int	main(void)
{
	int	maxin = 172345345;
	int	minin = -17582344;
	int	n = 1234;
	int n2 = 3;

	printf("Test\nIn:%i Out:%s\nIn:%i Out:%s\nIn:%i Out:%s\nIn:%i Out:%s\n",
			maxin, ft_itoa(maxin), minin, ft_itoa(minin), n, ft_itoa(n),
			n2, ft_itoa(n2));

	return (0);
}
//*/