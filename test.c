/*
Code to test the library's functions
*/

#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("\n----|----|----|-Test|----|----|----\n");
	printf("Can the functions be called? (Output unimportant)\n");
	printf("Function: ft_isalpha       | Out: %d\n", ft_isalpha('a'));
	printf("Function: ft_isdigit       | Out: %d\n", ft_isdigit('a'));
	printf("Function: ft_isalnum       | Out: %d\n", ft_isalnum('a'));
	printf("Function: ft_isascii       | Out: %d\n", ft_isascii('a'));
	printf("Function: ft_isprint       | Out: %d\n", ft_isprint('a'));
	printf("Function: ft_strlen        | Out: %d\n", ft_strlen("Hello"));
	return (0);
}
