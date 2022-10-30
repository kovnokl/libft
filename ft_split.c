/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:27:48 by knickel           #+#    #+#             */
/*   Updated: 2022/10/27 22:00:30 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_substrs(char *s, char c);
void	iterate_subs(char **substrings, size_t substr_cnt);

char	**ft_split(char const *s, char c)
{
	char	**substrings;
	size_t	substr_cnt;

	if (s == NULL)
		return (NULL);
	substr_cnt = count_substrs(s, c);
	substrings = (char **)malloc(sizeof(char *) * (substr_cnt + 1));
	if (substrings == NULL)
		return (NULL);
	substrings[substr_cnt] = 0;
	iterate_subs(substrings, substr_cnt);
}

size_t	count_substrs(char *s, char c)
{
	size_t	sub_amount;
	size_t	str_len;
	size_t	counter;

	str_len = ft_strlen(s);
	sub_amount = 0;
	counter = 0;
	if (str_len && s[0] && s[0] != c)
		sub_amount++;
	while (counter < str_len - 1)
	{
		if (s[counter] == c && s[counter + 1] != c)
			sub_amount++;
		counter++;
	}
	return (sub_amount);
}

void	iterate_subs(char **substrings, size_t substr_cnt)
{
	
}
