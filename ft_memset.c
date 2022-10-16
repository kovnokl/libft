/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:06:19 by knickel           #+#    #+#             */
/*   Updated: 2022/10/16 04:48:54 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				*cb;
	unsigned long	counter;

	cb = (int *)b;
	counter = 0;
	while (counter < len)
	{
		cb[counter] = c;
		counter++;
	}
	return (b);
}
