/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bucolak <bucolak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:06:03 by bucolak           #+#    #+#             */
/*   Updated: 2024/09/01 11:33:10 by bucolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		size;
	int		i;

	i = 0;
	size = 0;
	if (src == NULL)
		return (NULL);
	while (src[size])
	{
		size++;
	}
	new = malloc(size * (sizeof(char)));
	if (!(new))
	{
		return (NULL);
	}
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
