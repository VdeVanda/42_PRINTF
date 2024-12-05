/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:03:06 by vabatist          #+#    #+#             */
/*   Updated: 2024/12/04 10:08:45 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define LC_HEX "0123456789abcdef"
# define HC_HEX "0123456789ABCDEF"

int		ft_print_hex(unsigned int long nb, char *hex);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
long	ft_putnbr(long n);
int		ft_putstr(char *str);

#endif