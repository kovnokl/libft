/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:38:32 by knickel           #+#    #+#             */
/*   Updated: 2022/10/15 23:27:30 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	counter;
	size_t	start;
	size_t	end;
	char	*found_char;

	start = s1;
	end = &s1[ft_strlen(s1) - 1];
	counter = 0;
	while (counter < ft_strlen(s1))
	{
		if (ft_strchr(set, s1[counter]))
			start = &s1[counter];
		else
			break ;
	}
	counter = 0;
	while (counter < ft_strlen(s1))
	{
		if (ft_strchr(set, s1[ft_strlen(s1) - counter - 1]))
			end = &s1[ft_strlen(s1) - counter - 1];
		else
			break ;
	}
	return (ft_substr(s1, start, end));
}
