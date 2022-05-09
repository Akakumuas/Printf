/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:18:36 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:06:18 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//int main (void)
//{  
//    char c[50] = "je ne veux pvas";
//    char c1[50] = "je ne veux pvas";
//    char d = 'v';
//    char *a = ft_memchr(c, 'v', 8);
//    //memchr(c1, 'v', 4);
//    printf("%s\n",a);
//    //printf("%s\n", memchr(c1, d, 10));
//}