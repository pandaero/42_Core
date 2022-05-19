/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/19 16:53:02 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function compares two byte strings for equality.
Returns 0 if the strings are identical or the difference between first non-same.
rocess
*/
#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*pstr1;
	unsigned char	*pstr2;

	i = 0;
	pstr1 = (unsigned char *) str1;
	pstr2 = (unsigned char *) str2;
	while (n > i)
	{
		if (pstr1[i] != pstr2[i])
			return (pstr1[i] - pstr2[i]);
		i++;
	}
	return (0);
}

/* Test
#include <stdio.h>

int	main(void)
{
	return (0);
}
//*/