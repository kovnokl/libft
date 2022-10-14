/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:36:04 by knickel           #+#    #+#             */
/*   Updated: 2022/10/14 23:46:37 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ucs;
	unsigned int	ucc;
	unsigned int	counter;

	ucs = (unsigned char *)s;
	ucc = (unsigned char)c;
	while (counter < n)
	{
		if (ucs[counter] == ucc)
			return (&ucs[counter]);
		counter++;
	}
	return (0);
}
