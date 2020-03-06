/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 12:45:09 by esalorin          #+#    #+#             */
/*   Updated: 2019/12/19 16:43:06 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_first(char *res, int value, int base)
{
	if (value == 0)
		res[0] = '0';
	else if (value < 0 && base == 10)
		res[0] = '-';
}

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	char	*res;
	int		i;
	int		temp;
	long	n;

	str = "0123456789ABCDEF";
	i = 1;
	n = value;
	if (n < 0)
		i = (base == 10) ? 2 : 1;
	n = (n < 0) ? -n : n;
	temp = n;
	while ((temp = temp / base) > 0)
		i++;
	res = (char*)malloc(sizeof(char) * i + 1);
	res[i--] = '\0';
	while (n > 0)
	{
		res[i--] = str[n % base];
		n = n / base;
	}
	ft_first(res, value, base);
	return (res);
}
