/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bucolak <bucolak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:19:16 by bucolak           #+#    #+#             */
/*   Updated: 2024/09/01 15:12:17 by bucolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;

	i = 0;
	l = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(l * sizeof(int));
	if (!(*range))
	{
		return (-1);
	}
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (l);
}
