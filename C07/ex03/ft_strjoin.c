/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bucolak <bucolak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:19:23 by bucolak           #+#    #+#             */
/*   Updated: 2024/09/01 15:27:21 by bucolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_len(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i);
}

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	lsep;
	int	result;

	result = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
		}
		result += j;
		i++;
	}
	lsep = sep_len(sep) * (size - 1);
	return (result + lsep);
}

void	copy_str(char *new, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			new[c++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				new[c++] = sep[j++];
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		l;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	l = str_len(size, strs, sep);
	new = malloc(sizeof(char) * (l + 1));
	if (!new)
		return (0);
	copy_str(new, size, strs, sep);
	new[l] = '\0';
	return (new);
}
