/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/17 00:44:26 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function writes a value to a determined length of bytes in a string's memory.
Returns the first argument, the string's first character.
Turns the value to unsigned char, then writes it to each location within length.
*/
#include <stddef.h>

void	*ft_memset(void *bstr, int ch, size_t len)
{
	size_t			i;
	unsigned char	uch;
	unsigned char	*mptr;

	i = 0;
	uch = (unsigned char) ch;
	mptr = (unsigned char *) bstr;
	while (i < len)
	{
		mptr[i] = uch;
		i++;
	}
	return (bstr);
}

/* Test
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello";
	char	*ret;

	printf("Before:  %s\n", str);
	printf("Address: %x\n", *str);
	ret = ft_memset(str, 'c', 3);
	printf("After:   %s\n", str);
	printf("Address: %x", *ret);
	return (0);
}
//*/