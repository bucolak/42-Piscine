/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bucolak <bucolak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:17:22 by bucolak           #+#    #+#             */
/*   Updated: 2024/08/21 10:45:34 by bucolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	is_lower(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			c[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	is_lower(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cap == 1)
			{
				str[i] -= 32;
				cap = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
