/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:51:58 by nogeun            #+#    #+#             */
/*   Updated: 2021/01/28 11:44:22 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_vsprintf_x(char **tmp)
{
	if (**tmp == 'x')
	{
        g_checker = 1;
		g_base = 16;
		g_flags |= SMALL;
	}
}
