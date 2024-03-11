/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:14:06 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/11 11:39:48 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	char	*s;

	s = (char *)src;
	dlen = ft_strlen(dest);
	if (!s || *s == '\0')
		return (dlen);
	if (size <= dlen)
		return (size + dlen);
	while (*s && size > 0)
	{
		*(dest + dlen++) = *s++;
		size--;
	}
	dest[dlen] = '\0';
	return (dlen);
}
