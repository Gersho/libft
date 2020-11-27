/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:02:12 by kzennoun          #+#    #+#             */
/*   Updated: 2020/11/27 05:51:38 by kzennoun         ###   ########lyon.fr   */
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

int		ft_get_split_size(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c)
		i--;
	return (-i);
}

void	*ft_free_all_2d(char **ptr, int j)
{
	while (j >= 0)
		free(ptr[j]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		sep_count;
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
	split_size = 0;
	while (s[i])
	{
		if (s[i] == c && i != 0 && s[i - 1] != c)
		{
			split_size = ft_get_split_size(((char *)s + i - 1), c);
			if (!(ptr[j] = malloc((split_size + 1) * sizeof(char))))
				return (ft_free_all_2d(ptr, j - 1));
			i += ft_strlcpy(ptr[j], (char *)s + i - split_size, split_size + 1);
			j++;
		}
		i++;
	}
/* 	
	split_size = ft_get_split_size(((char *)s), c);
	if (!(ptr[0] = malloc((split_size + 1) * sizeof(char))))
		return (ft_free_all_2d(ptr, 0));
	printf("%d", split_size);
	ft_strlcpy(ptr[0], (char *)s, split_size + 1);
	printf();
	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			split_size = ft_get_split_size(((char *)s + i + 1), c);
			if (!(ptr[j] = malloc((split_size + 1) * sizeof(char))))
				return (ft_free_all_2d(ptr, j));
			i += ft_strlcpy(ptr[j], (char *)s + i + 1, split_size + 1);
			j++;
		}
		i++;
	} */
	ptr[j] = NULL;
	return (ptr);
}
