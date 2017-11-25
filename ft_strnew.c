/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:07:16 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/21 17:07:17 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	char	*set;

	if (!(set = (char *)malloc(size + 1)))
		return (NULL);
	ft_memset(set, '\0', size + 1);
	return (set);
}
