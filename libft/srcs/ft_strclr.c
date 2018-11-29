/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:59:02 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/29 19:03:11 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *c)
{
	int i;

	i = 0;
	if (c)
	{
		while (c[i] != '\0')
		{
			c[i] = '\0';
			i++;
		}
	}
}