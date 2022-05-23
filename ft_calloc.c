/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:13:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/23 18:32:22 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function allocates memory for a number of objects of a certain size in bytes.
Returns a pointer to the allocated memory. The memory  is filled with nulls.
For each object (determined by count), allocates and fills the req'd memory.
*/
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	max;
	unsigned int	alloc;

	i = 0;
	max = -1;
	ptr = (unsigned char *) 0;
	alloc = count * size;
	if (size != (alloc / count) && count != 0)
		return ((void *) ptr);
	ptr = malloc(alloc);
	if (!ptr)
		return ((void *) ptr);
	ft_bzero(ptr, alloc);
	return ((void *) ptr);
}

/* Test
//gcc -Wall -Werror -Wextra ft_calloc.c ft_bzero.c ft_memset.c && ./a.out|cat -e
#include <stdio.h>

int	main(void)
{
	unsigned char						*ptr;
	unsigned int						max;
	unsigned int						i;
	unsigned int						count;
	unsigned int						size;
	long long unsigned int	alloc;

	max = -1;
	count = 3;
	size = 15;
	i = 0;
	alloc = count * size;
	ptr = (unsigned char *) ft_calloc(count, size);
	if (ptr != (void *) 0)
	{
		printf("Allocated memory:");
		while (alloc > i)
		{
			printf("%c", ptr[i]);
			i++;
		}
		printf("\n");
	}
	return (0);
}
//*/