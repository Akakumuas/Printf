/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:30:23 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:06:29 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

//#include <string.h>
//#include <stdio.h>

//void	*ft_memcpy(void *dest, const void *src, size_t n);

//int	main()
//{
//	unsigned char	dst1[10] = "123456789";
//	unsigned char	dst2[10] = "123456789";
//	unsigned char	dst3[10] = "123456789";
//	unsigned char	dst4[10] = "123456789";
//	unsigned char	dst5[10] = "123456789";
//	unsigned char	src1[10] = "abcdefghi";
//	unsigned char	src2[10] = "abcdefghi";
//	unsigned char	src3[10] = "abcdefghi";
//	unsigned char	src4[10] = "abcdefghi";
//	unsigned char	src5[10] = "abcdefghi";

//	printf("********* memcpy **********\n");
//	printf("---------------------------\n");
//	printf("memcpy    =\t%s\n", memcpy(dst1, src1, 5));
//	printf("ft_memcpy =\t%s\n", ft_memcpy(dst1, src1, 5));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memcpy    =\t%s\n", memcpy(dst2, src2, 11));
//	printf("ft_memcpy =\t%s\n", ft_memcpy(dst2, src2, 11));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memcpy    =\t%s\n", memcpy(dst3, src3, 8));
//	printf("ft_memcpy =\t%s\n", ft_memcpy(dst3, src3, 8));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memcpy    =\t%s\n", memcpy(dst4, src4, 0));
//	printf("ft_memcpy =\t%s\n", ft_memcpy(dst4, src4, 0));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memcpy    =\t%s\n", memcpy(dst5, src5, 1));
//	printf("ft_memcpy =\t%s\n", ft_memcpy(dst5, src5, 1));
//	printf("---------------------------\n");
//	return (0);
//}