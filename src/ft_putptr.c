/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:28:10 by ctrinite          #+#    #+#             */
/*   Updated: 2022/05/07 04:46:07 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ptr_len(unsigned int num)
{
	int	len;

	len = 0;
	if (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_putptr(unsigned int num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_ptr(unsigned long long ptr)
{
	int	pl;

	pl = 0;
	pl += write(1, "0x", 2);
	if (ptr == 0)
		return (pl += write(1, "0", 1));
	else
	{
		ft_putptr(ptr);
		pl += ptr_len(ptr);
	}
	return (pl);
}
