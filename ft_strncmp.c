/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/18 02:34:35 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function compares two strings, gives difference when not equal.
Returns 0 if strings are equal. Returns ASCII difference when not.
Checks while they are equal and increments, when not, gives difference.
*/
#include <stddef.h>

int	ft_strncmp(const char *str1,const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (str1[i] == str2[i] && n > i+1)
		i++;
	if (str1[i] != str2[i] && n != 0)
		return (str1[i] - str2[i]);
	return (0);
}

/* Test
#include <stdio.h>

int	main(void)
{
	return (0);
}
//*/