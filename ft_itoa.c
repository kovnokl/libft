/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:03:02 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 04:43:21 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	ft_pow(int n, size_t p);
int	ft_abs(int n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_size;
	size_t	counter;
	int		negative;

	str_size = 1;
	counter = 1;
	negative = 0;
	if (n < 0)
		negative = 1;
	n = ft_abs(n);
	while (n / ft_pow(10, counter))
		counter++;
	str_size += counter;
	str = (char *)calloc((str_size + negative), sizeof(char));
	if (!str)
		return (0);
	if (negative)
		str[0] = '-';
	while (counter + negative > 1)
	{
		str[str_size - counter] = ((n / ft_pow(10, counter - 1)) % 10) + '0';
		counter--;
	}
	return (str);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
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
		counter++;
	}
	return (out);
}

int	main(void)
{
	printf("%s", ft_itoa(449));
	return (1);
}
