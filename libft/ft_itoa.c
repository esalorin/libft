/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:30:12 by esalorin          #+#    #+#             */
/*   Updated: 2019/11/03 19:41:49 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_string(char *s, long n, int size)
{
	s[size] = '\0';
	while (size)
	{
		s[--size] = (n % 10) + 48;
		n = n / 10;
	}
}

static	int	ft_size(long n)
{
	int size;

	if (n < 0)
	{
		size = 1;
		n = -n;
	}
	else
		size = 0;
	if (n < 10)
		size++;
	if (n > 9)
	{
		size++;
		size = size + ft_size(n / 10);
	}
	return (size);
}

char		*ft_itoa(int n)
{
	long	nbr;
	int		size;
	char	*s;

	nbr = n;
	size = ft_size(nbr);
	s = (char *)malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	ft_string(s, nbr, size);
	if (n < 0)
		s[0] = '-';
	return (s);
}
