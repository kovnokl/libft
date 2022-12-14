/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:03:02 by knickel           #+#    #+#             */
/*   Updated: 2022/12/04 19:18:27 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*create_str(size_t str_size, int negative);
static size_t	get_digit_count(int n);
static void		iterate_str(char *str, size_t str_size, size_t negative, int n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	counter;
	size_t	negative;

	counter = get_digit_count(n);
	negative = 0;
	if (n < 0)
		negative = 1;
	str = create_str(counter + 1, negative);
	if (str == NULL)
		return (NULL);
	iterate_str(str, counter + negative, negative, n);
	return (str);
}

static void	iterate_str(char *str, size_t str_size, size_t negative, int n)
{
	size_t	startps;

	startps = str_size - 1;
	while (startps + 1 > negative)
	{
		if (negative)
			str[startps] = (n % 10) * -1 + '0';
		else
			str[startps] = n % 10 + '0';
		n /= 10;
		startps--;
	}	
}

static char	*create_str(size_t str_size, int negative)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (str_size + negative));
	if (!str)
		return (NULL);
	if (negative)
		str[0] = '-';
	str[str_size + negative - 1] = 0;
	return (str);
}

static size_t	get_digit_count(int n)
{
	size_t	counter;

	counter = 1;
	while (n / 10)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}
