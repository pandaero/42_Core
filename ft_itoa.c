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

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	digs;

	if (n > 0)
		str = malloc((ft_digs(n) + 1) * sizeof(char));
	else if (n < 0)
		str = malloc((ft_digs(n) + 2) * sizeof(char));
	if (!str)
		return ((void *) 0);
	digs = ft_digs(n);
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
		str[digs] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

/* Test | gcc -Wall -Werror -Wextra ft_itoa.c && ./a.out
#include <stdio.h>

int	main(void)
{
	int	maxin = 2147483647;
	int	minin = -2147483647;
	int	n = 1234;
	int n2 = 3;
	char *str1;
    char *str2;
    char *str3;
    
    str1 = ft_itoa(maxin);
    str2 = ft_itoa(minin);
    str3 = ft_itoa(n);
    printf("Test\nIn:%i Out:%s\nIn:%i Out:%s\nIn:%i Out:%s\nIn:%i Out:%s\n",
            maxin, str1, minin, str2, n, str3,
            n2, ft_itoa(n2));
	return (0);
}
//*/