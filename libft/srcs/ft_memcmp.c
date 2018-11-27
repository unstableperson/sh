/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:02:48 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 17:31:30 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	char *a;
	char *b;

	a = (char *)arr1;
	b = (char *)arr2;
	while (n != 0)
	{
		if (*a != *b)
			return (1);
		else
		{
			a++;
			b++;
		}
		n--;
	}
	return (0);
}
