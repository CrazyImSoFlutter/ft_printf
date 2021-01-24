/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:41:26 by nogeun            #+#    #+#             */
/*   Updated: 2021/01/24 13:49:43 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_vsprintf_s(char *tmp, char *str, va_list args)
{
	const char	*s;
	int			len;
	int			i;

	if (*tmp == 's')
	{
        g_checker = 1;
		s = va_arg(args, char *);
		len = ft_strnlen(s, g_precision);
		if (!(g_flags & LEFT))
			while (len < g_field_width--)
				*str++ = ' ';
		i = 0;
		while (i < len)
		{
			*str++ = *s++;
			i++;
		}
		while (len < g_field_width--)
			*str++ = ' ';
	}
}