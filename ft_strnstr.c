/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:10:30 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/21 17:10:31 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	l;

	if (*s2 == '\0')
		return ((char *)s1);
	l = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= l)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, l) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
