/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:02:54 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 21:10:07 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*snc;
	size_t	counter;

	snc = (char *)s;
	cc = (char) c;
	counter = ft_strlen(s) + 1;
	while (counter > 0)
	{
		if (snc[counter - 1] == cc)
			return (&snc[counter - 1]);
		counter--;
	}
	return (0);
}
