/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:00:54 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/30 18:38:20 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		len;

	len = ft_strlen(str);
	while (str[len] != ch && len != 0)
		len--;
	if (str[len] == ch)
		return ((char *)&str[len]);
	return (NULL);
}
