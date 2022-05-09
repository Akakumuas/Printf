/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:07:03 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:06:46 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (i + ft_strlen(src));
	while (src[j])
	{
		if (j < size - dstlen - 1)
		{
			dst[i] = src[j];
			i++;
		}
		j++;
	}
	dst[i] = '\0';
	return (dstlen + j);
}
