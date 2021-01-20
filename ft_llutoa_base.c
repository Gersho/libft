/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:28:26 by kzennoun          #+#    #+#             */
/*   Updated: 2021/01/20 16:42:47 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get_digit_count(unsigned long long int nbr, int base_len)
{
	int		i;

	i = 1;
	while (nbr >= base_len)
	{
		i++;
		nbr /= base_len;
	}
	return (i);
}

int		check_base_is_valid(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[i + j])
		{
			if (base[i] == base[i + j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char		*ft_lltuoa_base(unsigned long long int nbr, char *base)
{
	int			base_len;
	int			digit_count;


	// malloc selon la taille de ft_get_digit_count(unsigned long long int nbr, int base_len)
	//boucler avec un while basé sur digitcount
	base_len = ft_strlen(base);
	digit_count = ft_get_digit_count(nbr, base_len);
	if (!check_base_is_valid(base) || base_len < 2)
		return ;
	while (nbr >= 0)
	{
		if (nbr < base_len)
		{
			ft_putchar(base[nbr]);
		}
		else
		{
			ft_putnbr_base(nbr / base_len, base);
			ft_putnbr_base(nbr % base_len, base);
		}
		nbr = -1;
	}
}
