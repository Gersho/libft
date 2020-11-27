/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 06:46:44 by kzennoun          #+#    #+#             */
/*   Updated: 2020/11/26 12:10:38 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (!(ptr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	ptr[len + 1] = '\0';
	return (ptr);
}
