/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:44 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/11 11:47:50 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i) == '\0')
			break ;
		count++;
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (count);
}

int	ft_get_word_size(char *s, char c)
{
	int	size;

	size = 0;
	while (*(s + size) && *(s + size) != c)
		size++;
	return (size);
}

char	*ft_fillword(char *w, char *s, char c)
{
	int	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
	{
		*(w + i) = *(s + i);
		i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wid;
	char	**words;
	char	*ss;

	ss = (char *)s;
	words = (char **) malloc(sizeof(char *) * ft_word_count(ss, c));
	if (!words)
		return (NULL);
	i = 0;
	wid = 0;
	while (*(ss + i))
	{
		words[wid] = (char *) malloc(sizeof(char) * ft_get_word_size(ss + i, c));
		words[wid] = ft_fillword(words[wid], ss + i, c);
		wid++;
		while (*(ss + i) && *(ss + i) != c)
			i++;
		while (*(ss + i) && *(ss + i) == c)
			i++;
	}
	return (words);
}

