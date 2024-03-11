/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:14:06 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/11 15:40:29 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = i;
		while (big[j] == little[j] && big[j] && j < len)
		{
			ft_putstr((char *)(big + j));
			ft_putchar('\n');
			ft_putstr((char *)(little + j));
			ft_putstr("\n\n");
			if (little[j + 1] == '\0')
			{
				return ((char *)(big + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
