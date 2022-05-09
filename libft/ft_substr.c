/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:23:11 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 01:44:54 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s_len;
	size_t	end;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start > s_len)
		return (ft_calloc(1, sizeof (char)));
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	s2 = (char *)malloc(sizeof(char) * (end + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, end + 1);
	return (s2);
}

//#include <stdio.h>
//int main (void)
//{
//	char *s1 = ft_substr("salut les amis", 6, 7);
//	//char *s2 = substr("salut les amis", 6, 10);
//	printf("%s\n", s1);
//	//printf("%s\n", s2);
//	free (s1);
//	//free (s2);
//	system("leaks a.out");
//}