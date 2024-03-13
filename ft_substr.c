/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:43 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/13 16:06:20 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(char *s, size_t len)
{
	if (ft_strlen(s) > (int)len)
		return (len + 1);
	else
		return (ft_strlen(s) + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new;
	char const	*old;
	size_t		i;

	new = (char *) malloc(((sizeof(char) * ft_size((char *)(s + start), len))));
	if (!new)
		return (NULL);
	if ((int)start >= ft_strlen((char *)s))
	{
		new[0] = '\0';
		return (new);
	}
	old = s;
	i = 0;
	while (i < len && *(old + i + start))
	{
		*(new + i) = *(old + i + start);
		i++;
	}
	new[i] = '\0';
	return (new);
}
