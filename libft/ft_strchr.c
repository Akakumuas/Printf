/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:29:24 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:06:32 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

//#include <stdio.h>
//#include <string.h>
//int main (void)
//{
//    char *c = "je ne veuvx pas";
//    char *c1 = "je ne veuvx pas";
//    char d = 'v';

//    printf("%s\n",ft_strchr(c, d));
//    printf("%s\n", strchr(c1, d));
//    //printf("%p\n", NULL);

//}