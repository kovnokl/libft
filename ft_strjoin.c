/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:30:11 by knickel           #+#    #+#             */
/*   Updated: 2022/10/15 18:49:16 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*str_ptr;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	str_ptr = str;
	while (*s1)
	{
		*str_ptr = *s1;
		str_ptr++;
		s1++;
	}
	while (*s2)
	{
		*str_ptr = *s2;
		str_ptr++;
		s2++;
	}
	str_ptr = 0;
	return (str);
}
