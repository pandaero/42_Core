/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/18 00:10:26 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description of function
Overview
Output
Process
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