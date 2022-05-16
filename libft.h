/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:26:47 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/16 18:43:05 by pandalaf         ###   ########.fr       */
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
unsigned int	ft_strlen(const char *str);
//Function writes a value to a determined length of bytes in memory.
void			ft_memset(void *byte, int ch, size_t len);
//Function sets determined length of memory in a string to zero.
void			ft_bzero(void *str, size_t len);

#endif
