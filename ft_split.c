/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:02:12 by kzennoun          #+#    #+#             */
/*   Updated: 2020/12/01 16:11:22 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int		ft_get_sep_count(char const *s, char c)
{
	int		i;
	int		sep_count;

	sep_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			sep_count++;
		i++;
	}
	return (sep_count);
}
/* 
int		ft_get_split_size(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

int		ft_skip_separators(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
} */

char	**ft_free_all_2d(char **ptr, int j)
{
	while (j >= 0)
		free(ptr[j]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
/* 	int		sep_count;
	int		i;
	int		j;
	int		split_size;
	char	**ptr;

	if (!s || !c)
		return (NULL);
	sep_count = ft_get_sep_count(s, c);
	if (!(ptr = malloc((sep_count + 2) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i += ft_skip_separators((char *)s + i, c);
		else
		{
			split_size = ft_get_split_size((char *)s + i, c);
			if (!(ptr[j] = malloc((split_size + 1) * sizeof(char))))
				return (ft_free_all_2d(ptr, j - 1));
			i += ft_strlcpy(ptr[j], (char *)s + i, split_size + 1);
			j++;
		}
	}
	ptr[j] = NULL;
	return (ptr); */
}
