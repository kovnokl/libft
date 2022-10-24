/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:03:02 by knickel           #+#    #+#             */
/*   Updated: 2022/10/24 20:45:48 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int		ft_pow(int n, size_t p);
char	*create_str(size_t str_size, int negative);
int		ft_abs(int n);
void	iterate_str(char *str, size_t str_size, int negative, int n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	counter;
	int		negative;
	size_t	position;

	counter = 1;
	negative = 0;
	while (n / ft_pow(10, counter))
		counter++;
	str = create_str(counter + 1, negative);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		negative = 1;
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	n = ft_abs(n);
	iterate_str(str, counter + negative, negative, n);
	return (str);
}

void	iterate_str(char *str, size_t str_size, int negative, int n)
{
	size_t	start_pos;

	start_pos = str_size - 1;
	while (start_pos > negative)
	{
		str[start_pos] = ((n / ft_pow(10, str_size - start_pos)) % 10) + '0';
		start_pos--;
	}	
}

char	*create_str(size_t str_size, int negative)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * );
	if (!str)
		return (NULL);
	if (negative)
		str[0] = '-';
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
	printf("%s", ft_itoa(-123));
}
