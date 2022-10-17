/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:03:02 by knickel           #+#    #+#             */
/*   Updated: 2022/10/17 22:16:05 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int n, size_t p);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_size;
	size_t	counter;
	int		negative;

	str_size = 2;
	counter = 1;
	if (n < 0)
		negative = 1;
	while (n / ft_pow(10, counter))
		counter++;
	str_size += counter;
	str = (char *)ft_calloc(sizeof(char), str_size + negative);
	if (!str)
		return (0);
	if (negative)
		str[0] = '-';
	while (counter + negative > 1)
	{
		str[str_size - counter] = n % ft_pow(10, counter);
		counter--;
	}
	return (str);
}

int	ft_pow(int n, size_t p)
{
	size_t	counter;
	int		out;

	counter = 0;
	out = 1;
	while (counter < p)
	{
		out *= n;
	}
	return (out);
}
