/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/06/03 10:43:54 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function creates a new char string with chars from the input removed.
Returns a pointer to the new string (with the characters from the set removed).
Allocates necessary memory, then checks source string to trim characters from. 
*/
#include <stdlib.h>
#include "libft.h"

static unsigned char	*ft_trimalloc(char const *s1, char const *set)
{
	unsigned char	*ptr;
	unsigned int	reqlen;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	reqlen = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				reqlen++;
			j++;
		}
		j = 0;
		i++;
	}
	reqlen = i - reqlen;
	ptr = malloc(reqlen);
	if (!ptr)
		return ((unsigned char *) 0);
	return (ptr);
}

static unsigned int	ft_writing(char *ptr1, const char *s1, unsigned int k)
{
	ft_memcpy(ptr1, s1, 1);
	k++;
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*ptr;
	unsigned int	ii[3];

	ptr = ft_trimalloc(s1, set);
	if (!ptr)
		return ((char *) 0);
	ii[0] = 0;
	ii[1] = 0;
	ii[2] = 0;
	if (set[ii[1]] == '\0')
		return ((char *) ft_memcpy(ptr, s1, ft_strlen(s1) + 1));
	while (s1[ii[0]] != '\0')
	{
		while (s1[ii[0]] != set[ii[1]] && set[ii[1]] != '\0')
		{
			if (set[ii[1] + 1] == '\0')
				ii[2] = ft_writing((char *) &ptr[ii[2]],
						&s1[ii[0]], ii[2]);
			ii[1]++;
		}
		ii[1] = 0;
		ii[0]++;
	}
	ptr[ii[2]] = '\0';
	return ((char *) ptr);
}

/* Test
//gcc -Wall -Werror -Wextra ft_strtrim.c ft_memcpy.c ft_strlen.c && ./a.out
#include <stdio.h>

int	main(void)
{
	char	s[] = "  xxtriple";
	char	set[] = " x";

	printf("Test1: s-%s, set-%s, Out-%s", s, set, ft_strtrim(s, set));
	return (0);
}
//*/