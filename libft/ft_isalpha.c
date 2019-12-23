/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:09:22 by erahimi           #+#    #+#             */
/*   Updated: 2019/04/10 15:48:30 by erahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (('a' <= c) && (c <= 'z'))
	{
		return (1);
	}
	if (('A' <= c) && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}