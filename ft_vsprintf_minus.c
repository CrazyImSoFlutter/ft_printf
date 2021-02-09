/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf_minus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:44:54 by nogeun            #+#    #+#             */
/*   Updated: 2021/02/09 12:59:39 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_vsprintf_minus(char **tmp)
{
	if (**tmp == '-')
	{
		g_flags |= LEFTFORMATFLAG;
		g_checker = 2;
	}
}