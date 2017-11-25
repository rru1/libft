/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:53:19 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/21 15:53:22 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, char *src, int nb)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (dst[size])
		size++;
	while (i < nb && src[i])
	{
		dst[size] = src[i];
		size++;
		i++;
	}
	dst[size] = '\0';
	return (dst);
}
