/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:56:45 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/26 14:46:35 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmps;
	char	*tmpd;

	i = 0;
	tmps = (char *)src;
	tmpd = (char *)dst;
	if (tmps < tmpd)
		while (len-- > 0)
			((char *)tmpd)[len] = ((char *)tmps)[len];
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
