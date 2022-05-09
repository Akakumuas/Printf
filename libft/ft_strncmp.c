/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:10:33 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:06:54 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

//#include <string.h>
//#include <stdio.h>

//int	main(void)
//{
//	char s1[] = "";
//	char s2[] = "5121";
//	char s3[] = "Same";
//	char s4[] = "Size";
//	char s5[] = "Shorter";
//	char s6[] = "ThanMyself";
//	char s7[] = "ShorterTest";

//	printf("%d, %d\n", ft_strncmp(s1, s2, 1), strncmp(s1, s2, 1));
//	printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
//	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
//	printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
//	printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
//	printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
//	printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
//	printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
//	printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
//}