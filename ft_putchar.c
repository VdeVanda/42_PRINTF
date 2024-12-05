/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:07:57 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/30 10:13:04 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	counter;

	counter = 0;
	counter += write(1, &c, 1);
	return (counter);
}

/* int	main(void)
{
	ft_putchar('v');
	ft_putchar('\n');
} */
