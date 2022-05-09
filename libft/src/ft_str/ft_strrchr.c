/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:01:59 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 01:20:20 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//int main (void)
//{
//    char *c = "je ne veuvx pas";
//    char *c1 = "je ne veuvx pas";
//    char d = 'v';

//    printf("%s\n",ft_strrchr(c, d));
//    printf("%s\n", strrchr(c1, d));
//}