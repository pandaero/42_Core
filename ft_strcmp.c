/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:13:32 by pandalaf          #+#    #+#             */
/*   Updated: 2022/04/26 12:20:10 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function checks if strings are exactly equal.
Function returns 1 if they are, 0 otherwise.
Check character for character whether they are the same, when they are different,
return 0, if it hasn't happened by the end, return 1.
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

/* Test
#include <stdio.h>
#include <string.h>

int	main(void)
{

	return (0);
}
//*/