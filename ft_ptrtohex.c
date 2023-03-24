/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:26:14 by knickel           #+#    #+#             */
/*   Updated: 2023/03/24 14:58:07 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ptrtohex(char *ptr)
{
	size_t			counter;
	unsigned int	length;
	char			*str;
	unsigned long	nbr;
	const char		*base = "0123456789abcdef";

	nbr = (unsigned long) ptr;
	length = sizeof(unsigned long);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		retun (NULL);
	counter = 0;
	while (counter < length)
	{
		str[counter] = base[nbr % 16];
		nbr /= 16;
		counter++;
	}
	str[length] = 0;
	return (str);
}
