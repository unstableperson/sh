/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:19:15 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/24 14:52:33 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char const *s)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
	k = i;
	while (s[i] != '\0')
		i++;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	return (i - k - k);
}

char	*ft_strtrim(char const *s)
{
	char	*c;
	int		i;
	int		k;

	i = 0;
	k = 0;
	c = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (*c)
		return (NULL);
	while (s[i] != '\0')
	{
		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && k == 0)
			i++;
		if (k < ft_strlen(s))
			c[k++] = s[i++];
		else
			i++;
	}
	return (c);
}

int	main()
{
	char s[10] = "   av ca  ";
	printf("%s", ft_strtrim(s));
	return (0);
}