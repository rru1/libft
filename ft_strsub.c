/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:10:07 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/21 18:50:14 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	tmp = (char *)ft_memalloc(sizeof(char) * (len + 1));
	while (i < len && s[start] != '\0')
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}
