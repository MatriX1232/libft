/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:14:06 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/11 11:34:24 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t					i;
// 	unsigned char			*d;
// 	unsigned const char		*s;
// 	unsigned char			tmp[n];

// 	d = dest;
// 	s = src;
// 	i = 0;
// 	while (i < n)
// 	{
// 		tmp[i] = s[i];
// 		i++;
// 	}
// 	i = 0;
// 	while (i < n && d[i])
// 	{
// 		d[i] = tmp[i];
// 		i++;
// 	}
// 	return (dest);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	d = dest;
	s = src;
	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
