/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/25 17:51:16 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function creates a new character string from another character string's content.
Returns a pointer to the first letter of the found string. Null otherwise.
Process
*/
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*ptr;
	unsigned int	slen;
	unsigned int	i;

	i = 0;
	slen = ft_strlen(s);
	if (len >= 0)
	{
		if (len < slen)
			ptr = malloc(len + 1);
		else
			ptr = malloc(slen);
		if (!ptr)
			return ((char *) 0);
		while (len > i)
		{
			ptr[i] = s[start + i];
			i++;
		}
		ptr[i] = '\0';
	}
	return ((char *) 0);
}

/* Test | gcc -Wall -Werror -Wextra ft_template.c && ./a.out
#include <stdio.h>

int	main(void)
{
	return (0);
}
//*/