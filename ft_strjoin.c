/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:44 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/19 14:43:41 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_all_size(char *s1, char *s2)
{
	return (ft_strlen(s1) + ft_strlen(s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	char		*new;
	char		*ss1;
	char		*ss2;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	new = (char *) malloc(sizeof(char) * (ft_all_size(ss1, ss2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (*ss1)
	{
		*(new + i++) = *ss1++;
	}
	while (*ss2)
	{
		*(new + i++) = *ss2++;
	}
	*(new + i) = '\0';
	return (new);
}
