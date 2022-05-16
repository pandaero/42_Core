/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/16 18:43:57 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function takes a lowercase letter character and makes it an uppercase letter.
Result is the uppercase value for the input character.
The ASCII offset is simply subtracted to give the uppercase value.
*/

int	ft_toupper(int ch)
{
	return (ch - 32);
}

/* Test
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	ch;

	ch = 97;
	printf("Before: %c, After: %c\n", ch, ft_toupper(ch));
	return (0);
}
//*/