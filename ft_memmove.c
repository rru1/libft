/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:56:45 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/21 15:56:47 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = ft_memcpy(ft_strnew(len), src, len);
	while (i < len)
	{
		((char *)dst)[i] = ((char *)tmp)[i];
		i++;
	}
	return (dst);
}
