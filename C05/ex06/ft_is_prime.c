/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bucolak <bucolak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:47:18 by bucolak           #+#    #+#             */
/*   Updated: 2024/08/27 18:06:50 by bucolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}
