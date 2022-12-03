/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:14:05 by knickel           #+#    #+#             */
/*   Updated: 2022/12/03 17:51:28 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	size_t	counter;

	counter = 0;
	cc = (char)c;
	while (s[counter])
	{
		if (s[counter] == cc)
			return ((char *)&s[counter]);
		s++;
	}
	if (!cc)
		return ((char *)s);
	return (NULL);
}
