/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:06:19 by knickel           #+#    #+#             */
/*   Updated: 2022/10/13 12:48:48 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *s, int c, unsigned long n)
{
	int				*cs;
	unsigned long	counter;

	cs = (int *)s;
	counter = 0;
	while (counter < n)
	{
		cs[counter] = c;
		counter++;
	}
	return (s);
}
