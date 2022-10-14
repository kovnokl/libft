/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:31:14 by knickel           #+#    #+#             */
/*   Updated: 2022/10/13 12:56:10 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	char			*cs;
	unsigned long	counter;

	cs = (char *)s;
	counter = 0;
	while (counter < n)
	{
		cs[counter] = 0;
		counter++;
	}
}
