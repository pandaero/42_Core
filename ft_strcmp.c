/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:13:32 by pandalaf          #+#    #+#             */
/*   Updated: 2022/04/25 18:23:29 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function returns 1 if the strings are the same, 0 otherwise
Check character for character if they are the same, the first encounter with a
different character it will return 0, after going through all without this
happening, return 1.
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

/*
Test
#include <stdio.h>
#include <string.h>

int	main(void)
{

	return (0);
}
//*/