/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:57:51 by ctrinite          #+#    #+#             */
/*   Updated: 2022/05/07 04:45:00 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int		hex_len(unsigned int num);
void	ft_puthex(unsigned int num, const char format);
int		ft_hex(unsigned int num, const char format);
int		ptr_len(unsigned int num);
void	ft_putptr(unsigned int num);
int		ft_ptr(unsigned long long ptr);
int		ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printpercent(void);
int		ft_printnbr(int n);
int		ft_num_len(unsigned int num);
char	ft_utioa(unsigned int n);
int		ft_putunsigned(unsigned int n);
int		ft_printchar(int c);
int		ft_format(va_list args, const char format);
int		ft_printf(const char *str, ...);

#endif