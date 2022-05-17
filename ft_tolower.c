/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/17 21:28:03 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function takes an uppercase letter character and makes it a lowercase letter.
Result is the lowercase value for the input character.
Checks input, then ASCII offset is applied to give the lowercase value.
*/

#include "libft.h"
int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}

/* Test
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	ch;

	ch = 65;
	printf("Before: %c, After: %c\n", ch, ft_tolower(ch));
	return (0);
}
//*/