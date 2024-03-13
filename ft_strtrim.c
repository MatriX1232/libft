/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:44 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/13 16:51:20 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_if_in_tab(char c, char *set)
{
	int	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}


static int	ft_getSizeTrim(char *s, char *set)
{
	int	i;
	int	size;

	i = 0;
	while (*(s + i) && ft_check_if_in_tab(*(s + i), set))
	{
		i++;
	}
	size = i;
	i = ft_strlen(s) - 1;
	while (i > 0 && ft_check_if_in_tab(*(s + i), set))
	{
		i--;
		size++;
	}
	return (size);
}

static int	ft_getSizeRight(char *s, char *set)
{
	int	i;
	int	size;

	i = ft_strlen(s) - 1;
	size = 0;
	while (i > 0 && ft_check_if_in_tab(*(s + i), set))
	{
		i--;
		size++;
	}
	return (size);
}

static int	ft_get_size(int match, char *s1, char const *set)
{
	if (match == 0)
	{
		return (ft_strlen(s1) - ft_getSizeTrim((char *)s1, (char *)set));
	}
	else if (match == 1)
	{
		return (-1);
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	char		*new;
	char const	*s;
	char const	*sset;

	new = (char *) malloc(sizeof(char) * (ft_get_size(0, (char *)s1, set) + 1));
	if (!new)
		return (NULL);
	i = 0;
	s = s1;
	sset = set;
	while (*(s + i) && ft_check_if_in_tab(*(s + i), (char *)sset))
		i++;
	if (ft_strlen((char *)s) == i)
		new[0] = '\0';
	else
		ft_strlcpy(new, (char *)s + i, ft_strlen((char *)s) - ft_getSizeRight((char *)s, (char *)sset) - i + 1);
	return (new);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	if (!s1 || !set)
//         return (NULL);

//     int start = ft_get_size(0, (char *)s1, set);
//     int end = ft_strlen((char *)s1) - ft_get_size(1, (char *)s1, set);

//     if (start >= end)
//         return (ft_strdup(""));

//     char *new = (char *)malloc(sizeof(char) * (end - start + 1));
//     if (!new)
//         return (NULL);

//     ft_strlcpy(new, (char *)s1 + start, end - start + 1);
//     return (new);
// }
