/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:26:47 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/22 00:53:09 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

//Function determines whether input character is alphabetic.
int				ft_isalpha(int ch);
//Function takes a lowercase letter character and makes it an uppercase letter.
int				ft_toupper(int ch);
//Function determines whether input character is a digit.
int				ft_isdigit(int ch);
//Function takes an uppercase letter character and makes it a lowercase letter.
int				ft_tolower(int ch);
//Function determinse whether input character is alphanumeric.
int				ft_isalnum(int ch);
//Function determines whether input is in the standard ASCII table.
int				ft_isascii(int ch);
//Function determines whether input is a printing character.
int				ft_isprint(int ch);
//Function determines length of the string.
size_t			ft_strlen(const char *str);
//Function looks for a character within a string pointer.
char			*ft_strchr(const char *str, int ch);
//Function looks for the last instance of a character within a string pointer.
char			*ft_strrchr(const char *str, int ch);
//Function compares two strings, gives difference when not equal.
int				ft_strncmp(const char *str1, const char *str2, size_t n);
//Function writes a value to a determined length of bytes to a memory location.
void			ft_memset(void *byte, int ch, size_t len);
//Function sets determined length of memory in a memory location to zero.
void			ft_bzero(void *str, size_t len);
//Function locates the first instance of a character within n bytes of a string.
void			*ft_memchr(const void *str, int ch, size_t n);
//Function compares two memory strings for equality within n bytes of a string.
int				ft_memcmp(const void *str1, const void *str2, size_t n);
//Function copies n bytes (char 8-bits) from a string to a different string.
void			*ft_memcpy(void *dst, const void *src, size_t n);
//Function moves n bytes (char 8-bits) from source string to dest string.
void			*ft_memmove(void *dst, const void *src, size_t n);
//Function writes to n bytes of a char string from a source to a destination.
size_t			ft_strlcpy(char *dst, const char *src, size_t sizedst);
//Function appends n bytes of a source character string to a destination string.
size_t			ft_strlcat(char *dst, const char *src, size_t sizedst);

#endif
