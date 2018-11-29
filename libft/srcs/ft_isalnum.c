/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:47:14 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/28 19:06:58 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_isalnum(int ch)
{
	if (ft_isalpha(ch))
		return (1);
	if (ft_isdigit(ch))
		return (1);
	return (0);
}