/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:44 by msolinsk          #+#    #+#             */
/*   Updated: 2024/03/12 14:45:30 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		n = n * (-1);
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa_internal(char *num, int n, int i, int minus)
{
	while (n > 0)
	{
		if (minus && i == 0)
			break ;
		*(num + i--) = (n % 10) + '0';
		n = n / 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		minus;
	int		i;
	char	*num;

	minus = 0;
	if (n == -2147483648)
	{
		num = (char *) malloc(11);
		ft_strlcpy(num, "-2147483648", 12);
		return (num);
	}
	if (n < 0)
		minus = 1;
	num = (char *) malloc(sizeof(char) * (ft_intlen(n) + minus));
	if (minus)
	{
		n *= (-1);
		*num = '-';
		i = ft_intlen(n) + 1;
	}
	else
	{
		i = ft_intlen(n);
	}
	*(num + i--) = '\0';
	return (num = ft_itoa_internal(num, n, i, minus));
}
