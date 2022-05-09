/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:57:51 by ctrinite          #+#    #+#             */
/*   Updated: 2022/05/09 15:11:04 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdint.h>

int		hex_len(unsigned int num);
void	ft_puthex(unsigned int num, const char format);
int		ft_hex(unsigned int num, const char format);
int		ptr_len(uintptr_t num);
void	ft_putptr(uintptr_t num);
int		ft_ptr(uintptr_t ptr);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printpercent(void);
int		ft_printnbr(int n);
int		ft_num_len(unsigned int num);
char	*ft_utioa(unsigned int n);
int		ft_putunsigned(unsigned int n);
int		ft_printchar(int c);
int		ft_format(va_list args, const char format);
int		ft_printf(const char *str, ...);

#endif