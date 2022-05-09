/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:25:23 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:05:55 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	nb;
	long int	neg;
	long int	i;

	nb = 0;
	neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (neg * nb);
}

//#include <stdio.h>

//int main(void)
//{
//	printf("%d\n", ft_atoi(""));
//	printf("%d\n", atoi(""));
//	printf("%d\n", ft_atoi(" --+-+-452b6125"));
//	printf("%d\n", atoi(" --+-+-452b6125"));
//	printf("%d\n", ft_atoi("-452b6125"));
//	printf("%d\n", atoi("-452b6125"));
//	printf("%d\n", ft_atoi("+452b6125"));
//	printf("%d\n", atoi("+452b6125"));
//}