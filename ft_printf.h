/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:16:46 by cfontain          #+#    #+#             */
/*   Updated: 2022/05/19 10:45:15 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_checkpourcent(const char *str, va_list list, int *i, int *len);
void	ft_putnbr(long int nb, int *len);
void	ft_putnegative(int *len);
void	ft_writenbr(unsigned long int nb, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putchar(int a, int *len);
void	ft_pointerisnullornot(unsigned long nb, int *len);
void	ft_putnbrhex(unsigned long int nb, int *len);
void	ft_putnbrhexupper(unsigned int nb, int *len);
void	ft_writenbrupper(unsigned long int nb, int *len);
#endif
