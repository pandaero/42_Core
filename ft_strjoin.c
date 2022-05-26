/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/26 17:07:42 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description of function
Overview
Output
Process
*/
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	j;

	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return ((char *) 0);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = 0;
	return ((char *) ptr);
}

/* Test | gcc -Wall -Werror -Wextra ft_template.c && ./a.out
#include <stdio.h>

int	main(void)
{
	return (0);
}
//*/