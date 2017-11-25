/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:53:01 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/21 15:53:03 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	tmp = ft_strdup(s);
	while (tmp[i])
	{
		tmp[i] = (*f)(i, tmp[i]);
		i++;
	}
	return (tmp);
}
