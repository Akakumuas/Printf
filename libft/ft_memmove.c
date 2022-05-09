/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:44:12 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:06:26 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

//#include <string.h>
//#include <stdio.h>

//void	*ft_memmove(void *dest, const void *src, size_t n);

//int	main()
//{
//	unsigned char	dst1[10] = "123456789";
//	unsigned char	dst2[10] = "123456789";
//	unsigned char	dst3[10] = "123456789";
//	unsigned char	dst4[10] = "123456789";
//	unsigned char	dst5[10] = "123456789";
//	unsigned char	src1[10] = "abcdefghij";
//	unsigned char	src2[10] = "abcdefghij";
//	unsigned char	src3[10] = "abcdefghij";
//	unsigned char	src4[10] = "abcdefghij";
//	unsigned char	src5[10] = "abcdefghij";

//	printf("********* memmove **********\n");
//	printf("---------------------------\n");
//	printf("memmove    =\t%s\n", memmove(dst1, src1, 5));
//	printf("ft_memmove =\t%s\n", ft_memmove(dst1, src1, 5));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memmove    =\t%s\n", memmove(dst2, src2, 10));
//	printf("ft_memmove =\t%s\n", ft_memmove(dst2, src2, 10));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memmove    =\t%s\n", memmove(dst3, src3, 8));
//	printf("ft_memmove =\t%s\n", ft_memmove(dst3, src3, 8));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memmove    =\t%s\n", memmove(dst4, src4, 0));
//	printf("ft_memmove =\t%s\n", ft_memmove(dst4, src4, 0));
//	printf("---------------------------\n");
//	printf("---------------------------\n");
//	printf("memmove    =\t%s\n", memmove(dst5, src5, 1));
//	printf("ft_memmove =\t%s\n", ft_memmove(dst5, src5, 1));
//	printf("---------------------------\n");
//	return (0);
//}
