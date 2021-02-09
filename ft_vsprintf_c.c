/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:30:09 by nogeun            #+#    #+#             */
/*   Updated: 2021/02/09 14:13:41 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_vsprintf_c(char **tmp, char **str, va_list *ap)
{
	int		t;

	t = 0;
	if (**tmp == 'c')
	{
		if (!(g_flags & LEFTFORMATFLAG))
			while (--g_format_num > 0)
				ft_outputchar(str, ' ');
		t = va_arg(*ap, int);
		if (t == 0)
		{
			*(*str)++ = 7;
			g_nullchecker[g_cchecker] = 1;
			g_cchecker++;
		}
		else
			ft_outputchar(str, t);
		while (--g_format_num > 0)
			ft_outputchar(str, ' ');
		g_checker = 1;
	}
}
