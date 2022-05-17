/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/18 00:16:12 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function looks for the last instance of a character within a string pointer.
Returns pointer to location of the character.
Compares each character in string. Returns pointer last time it is the same.
*/

char	*ft_strrchr(const char *str, int ch)
{
	int	i;
	int ln;

	i = 0;
	ln = i;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			ln = i;
		i++;
	}
	if (ch == '\0' && str[i] == '\0')
		ln = i;
	return ((char *) &str[ln]);
}

/* Test
#include <stdio.h>

int	main(void)
{
	char	str[] = "Wordo";
	char	*ptr;

	printf("----|----|----|----\n");
	printf("String: %s, Address: %x\nChar:   %c, Address: %x\n",
			str, *str, 'o', 'o');
	ptr = ft_strrchr(str, 'o');
	printf("Search address: %x\n", *ptr);
	return (0);
}
//*/