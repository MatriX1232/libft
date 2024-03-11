/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:14:06 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/05 20:33:06 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ss1;
	unsigned const char	*ss2;

	ss1 = s1;
	ss2 = s2;
	while (*ss1 && *ss2 && n > 0)
	{
		if (*ss1 != *ss2)
		{
			return (*ss1 - *ss2);
		}
		ss1++;
		ss2++;
		n--;
	}
	if (n > 0)
		return (*ss1 - *ss2);
	return (0);
}
