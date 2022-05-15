/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:26:47 by pandalaf          #+#    #+#             */
/*   Updated: 2022/05/15 21:10:01 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

//Function determines whether input character is alphabetic.
int				ft_isalpha(char ch);
//Function determines whether input character is a digit.
int				ft_isdigit(char ch);
//Function determinse whether input character is alphanumeric.
int				ft_isalnum(char ch);
//Function determines whether input is in the standard ASCII table.
int				ft_isascii(char ch);
//Function determines whether input is a printing character.
int				ft_isprint(char ch);
//Function determines length of the string.
unsigned int	ft_strlen(const char *str);
//Function writes a value to a determined length of bytes in memory.
void			ft_memset(void *byte, int ch, size_t len);
//Function sets determined length of memory in a string to zero.
void			ft_bzero(void *str, size_t len);

#endif
