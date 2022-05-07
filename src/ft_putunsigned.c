/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:13:12 by ctrinite          #+#    #+#             */
/*   Updated: 2022/05/07 04:46:23 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	ft_utioa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_putunsigned(unsigned int n)
{
	int		pl;
	char	*num;

	pl = 0;
	if (n == 0)
		pl += write(1, '0', 1);
	else
	{
		num = ft_utioa(n);
		pl += ft_printstr(num);
		free (num);
	}
	return (pl);
}
