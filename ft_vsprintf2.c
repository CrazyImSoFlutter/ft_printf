/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:35:06 by nogeun            #+#    #+#             */
/*   Updated: 2021/02/09 14:39:26 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_vsprintf2(char **tmp)
{
	if (g_checker == 1 || g_checker == 2)
	{
		if (g_checker == 1)
			(*tmp)++;
		g_exitloop = 2;
		return ;
	}
}


