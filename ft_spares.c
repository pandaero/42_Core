/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spares.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/06/03 15:38:46 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
File collects useful functions for future use
Several Outputs
Several Methods
*/

//Function finds first instance of a character within a string, returns index.
static unsigned int	ft_strfichr(const char *str, int ch)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (i);
		i++;
	}
	return (0);
}

//Function finds last instance of a character within a string, returns index.
static unsigned int	ft_strlichr(const char *str, int ch)
{
	unsigned int	i;
	unsigned int	lc;

	i = 0;
	lc = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			lc = i;
		i++;
	}
	if (ch == '\0' && str[i] == '\0')
		lc = i;
	return (lc);
}

/* Test | gcc -Wall -Werror -Wextra ft_template.c && ./a.out
#include <stdio.h>

int	main(void)
{
	return (0);
}
//*/