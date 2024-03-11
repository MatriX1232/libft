/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:45 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/11 13:16:18 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	**array;

	array = (void **) malloc(sizeof(void *) * nmemb);
	if (!array || size == 0 || nmemb == 0)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		array[i] = (void *) malloc(size);
		if (!array[i])
			return (NULL);
		array[i] = 0;
		i++;
	}
	return (array);
}
