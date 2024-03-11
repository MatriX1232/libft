/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:43 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/05 11:57:43 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new;
    char const    *old;
    size_t    i;

    new = (char *) malloc((sizeof(char) * ft_strlen((char *)s)));
    old = s;
    if(!new)
        return (NULL);
    i = 0;
    while(i < len && *(old + (unsigned int)i + start))
    {
        *(new + (unsigned int)i) = *(old + (unsigned int)i + start);
        i++;
    }
    return (new);
}
