/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:27:48 by knickel           #+#    #+#             */
/*   Updated: 2022/10/20 19:51:23 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	iterate_substr(char **splitted_array, char c, size_t substring_amount);
char	**clear_split(char **splitted_array, size_t how_much);
char	*get_next_sub(char **substr, char c);

char	**ft_split(char const *s, char c)
{
	char	**splitted_array;
	char	*substr;
	size_t	substring_amount;
	size_t	counter;

	substr = (char *)s;
	substring_amount = 0;
	counter = 0;
	if (*s != c && *s)
		substring_amount = 1;
	while (s[counter])
	{
		if (s[counter] == c && s[counter + 1] && s[counter + 1] != c)
			substring_amount++;
		counter++;
	}
	if (!substring_amount)
		return (0);
	splitted_array = (char **)malloc(sizeof(char *) * (substring_amount + 1));
	splitted_array[substring_amount] = 0;
	iterate_substr(splitted_array, c, substring_amount);
	return (splitted_array);
}

void	iterate_substr(char **splitted_array, char c, size_t substring_amount)
{
	size_t	counter;

	counter = 0;
	while (counter < substring_amount)
	{
		splitted_array[counter] = get_next_sub(splitted_array, c);
		if (!splitted_array)
			splitted_array = (clear_split(splitted_array, counter + 1));
	}
}

char	*get_next_sub(char **substr, char c)
{
	size_t	substring_size;
	char	*new_sub;
	char	*found_char;

	found_char = ft_strchr(*substr, (int)c);
	if (!found_char)
		substring_size = found_char - *substr;
	else
		substring_size = ft_strlen(*substr);
	new_sub = ft_substr(*substr, 0, substring_size);
	*substr = ft_strchr(*substr, (int)c) + 1;
	return (new_sub);
}

char	**clear_split(char **splitted_array, size_t how_much)
{
	size_t	counter;

	counter = 0;
	while (counter < how_much)
	{
		free(splitted_array[counter]);
	}
	return (0);
}
