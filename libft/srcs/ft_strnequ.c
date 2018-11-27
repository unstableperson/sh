/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:10:19 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 17:37:01 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n != 0)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
		n--;
	}
	return (1);
}
