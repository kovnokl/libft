/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:24:31 by knickel           #+#    #+#             */
/*   Updated: 2022/12/03 18:03:58 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size == 0 || count == 0)
		return (malloc(0));
	total = size * count;
	if ((size_t)-1 / count < size)
		return (NULL);
	ptr = malloc(total);
	if (ptr != NULL)
		ft_bzero(ptr, total);
	return (ptr);
}
