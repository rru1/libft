/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:53:30 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/26 15:56:06 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(tmp = ft_strdup(s)))
		return (NULL);
	while (tmp[i])
	{
		tmp[i] = (*f)(tmp[i]);
		i++;
	}
	return (tmp);
}
