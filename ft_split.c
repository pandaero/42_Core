/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/06/03 19:02:19 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function splits a char string into char strings between a delimiter char.
Returns an array of char strings.
Determines no. of split elements, size of elements, allocates mem, fills array.
*/
#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

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
static unsigned int	*ft_wordlen(const char *str, unsigned char ch)
{
	unsigned int	*ptr;
	unsigned int	i;
	unsigned int	sz;
	unsigned int	cnt;

	ptr = calloc(ft_nwords(str, ch), sizeof(unsigned int));
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

char	**ft_split(char const *str, char delim)
{
	char			**out;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	out = ft_calloc(ft_nwords(str, delim) + ft_wordlen(str, delim));


	return (out);
}

/* Test
//gcc -Wall -Werror -Wextra ft_split.c ft_substr.c ft_calloc.c ft_strlen.c
#include <stdio.h>

int	main(void)
{
	char			str[] = ";;o;he;;hello";
	char			str2[] = "he;eo;";
	unsigned int	arr[2];

	arr[0] = ft_words(str, ';');
	arr[1] = ft_words(str2, ';');

	printf("Result1: %d, Result2 : %d", arr[0], arr[1]);
	return (0);
}
//*/