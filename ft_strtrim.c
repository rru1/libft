/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:55:29 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/21 15:55:31 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (s)
		if ((str = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	str = ft_strcpy(str, s);
	i = ft_strlen(str);
	while (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
		str[--i] = '\0';
	return (str);
}
