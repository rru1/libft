/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:51:38 by ibondare          #+#    #+#             */
/*   Updated: 2017/11/26 16:35:43 by ibondare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nl;

	if (!(nl = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (nl == NULL)
		return (NULL);
	if (content == NULL)
	{
		nl->content = NULL;
		nl->content_size = 0;
	}
	else
	{
		if (!(nl->content = malloc(sizeof(content))))
			return (NULL);
		if (nl->content == NULL)
			return (NULL);
		ft_memcpy((nl->content), content, content_size);
		nl->content_size = content_size;
	}
	nl->next = NULL;
	return (nl);
}
