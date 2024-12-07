/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bucolak <bucolak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 09:46:24 by bucolak           #+#    #+#             */
/*   Updated: 2024/09/01 10:58:00 by bucolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	i = 0;
	new = malloc((sizeof(int) * (max - min)));
	if (min == max || min > max)
		return (NULL);
	if (new == NULL)
	{
		return (NULL);
	}
	while (min + i < max)
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}
