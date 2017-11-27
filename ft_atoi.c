/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:48:27 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/26 17:15:29 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int nbr, char neg, int i)
{
	if (neg)
		nbr = -nbr;
	if (neg && i > 10)
		nbr = 0;
	if (!neg && i > 10)
		nbr = -1;
	return (nbr);
}

int			ft_atoi(const char *str)
{
	long int	nbr;
	char		neg;
	int			i;

	i = 0;
	while (ft_iswhitespace(*str))
		str++;
	neg = (*str == '-');
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	nbr = 0;
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
		i++;
	}
	nbr = check(nbr, neg, i);
	return (nbr);
}
