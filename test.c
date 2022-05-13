/*
Code to test the library's functions
*/

#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("\n----|----|----|-Test|----|----|----\n");
	printf("Can the functions be called?\n");
	printf("Function: ft_isalpha       | Out: %d", ft_isalpha('a'));
	printf("Function: ft_isdigit       | Out: %d", ft_isdigit('a'));
	printf("Function: ft_isalnum       | Out: %d", ft_isalnum('a'));
	printf("Function: ft_isascii       | Out: %d", ft_isascii('a'));
	printf("Function: ft_isprint       | Out: %d", ft_isprint('a'));
	return (0);
}
