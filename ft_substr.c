/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/26 20:45:00 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function creates a new character string from another character string's content.
Returns pointer to the new string. Null if memory allocation fails.
Allocates the memory, then fills it with the sub-string.
*/
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*ptr;
	unsigned int	i;
	size_t			slen;

	if (!s)
		return ((char *) 0);
	slen = ft_strlen(s);
	if (start > slen)
	{
		ptr = malloc(sizeof(char));
		if (!ptr)
			return ((char *) 0);
		ptr[0] = '\0';
		return ((char *) ptr);
	}
	if (len < slen)
		ptr = malloc((len + 1) * (sizeof(char)));
	if (len + start > slen)
		ptr = malloc((slen - start + 1) * (sizeof(char)));
	if (!ptr)
		return ((char *) 0);
	i = 0;
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
	char			src[] = "0123456789";
	unsigned int	start = 9;
	unsigned int	len = 10;

	printf("Test: str-%s, start-%d, n-%d, out-%s", src, start, len,
			ft_substr(src, start, len));
	return (0);
}
//*/