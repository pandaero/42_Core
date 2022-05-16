/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/16 18:44:00 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function takes an uppercase letter character and makes it a lowercase letter.
Result is the lowercase value for the input character.
The ASCII offset is simply added to give the uppercase value.
*/

int	ft_tolower(int ch)
{
	return (ch + 32);
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