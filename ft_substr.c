/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/26 16:53:25 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function creates a new character string from another character string's content.
Returs pointer to the new string. Null if malloc fails.

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
	if (len > slen)
		ptr = (unsigned char *) malloc(slen + 1);
	else
		ptr = (unsigned char *) malloc(len + 1);
	if (!ptr)
		return ((char *) 0);
	if (start > len)
	{
		ptr[0] = '\0';
		return ((char *) ptr);
	}
	while (len > i && slen > i)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return ((char *) ptr);
}

/* Test | gcc -Wall -Werror -Wextra ft_substr.c ft_strlen.c && ./a.out
#include <stdio.h>

int	main(void)
{
	char			src[] = "Helloo";
	unsigned int	start = 1;
	unsigned int	len = 1;

	printf("Test: str-%s, start-%d, n-%d, out-%s", src, start, len,
			ft_substr(src, start, len));
	return (0);
}
//*/