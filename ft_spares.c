/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spares.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/06/03 15:38:46 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
File collects useful functions for future use
Several Outputs
Several Methods
*/

//Function determines whether character is a spacing character.
static int	ft_isspace(int ch)
{
	if (ch == ' ')
		return (1);
	else if (ch == '\f' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v')
		return (1);
	return (0);
}


//Function finds first instance of a character within a string, returns index.
static unsigned int	ft_strfichr(const char *str, int ch)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (i);
		i++;
	}
	return (0);
}

//Function finds last instance of a character within a string, returns index.
static unsigned int	ft_strlichr(const char *str, int ch)
{
	unsigned int	i;
	unsigned int	lc;

	i = 0;
	lc = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			lc = i;
		i++;
	}
	if (ch == '\0' && str[i] == '\0')
		lc = i;
	return (lc);
}

//Function finds number of "words" in string between a set delimiter character.
static unsigned int	ft_nwords(const char *str, unsigned char ch)
{
	unsigned int	i;
	unsigned int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			if (str[i + 1] != ch && str[i + 1 != '\0'])
				cnt++;
			i++;
		}
		else
		{
			if (cnt == 0)
				cnt++;
			i++;
		}
	}
	return (cnt);
}

//Function determines the sizes of "words" in string between set delimiter char.
//Function returns an array with each words' size.
static unsigned int	*ft_szwords(const char *str, unsigned int nwords, unsigned char ch)
{
	unsigned int	*ptr;
	unsigned int	i;
	unsigned int	sz;
	unsigned int	cnt;

	ptr = malloc(sizeof(unsigned int) * nwords);
	if(!ptr)
		return ((unsigned int *) 0);
	i = 0;
	sz = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			if (str[i + 1] != ch && str[i + 1] != '\0')
				cnt++;
			i++;
		}
		else
		{
			if (cnt == 0)
				cnt++;
			sz++;
			if (str[i + 1] == ch && str[i + 1] != '\0')
			{
				cnt++;
				ptr[cnt] = sz;
				sz = 0;
			}
			i++;
		} 
	}	
	return (ptr);
}


/* Test | gcc -Wall -Werror -Wextra ft_template.c && ./a.out
#include <stdio.h>

int	main(void)
{
	return (0);
}
//*/