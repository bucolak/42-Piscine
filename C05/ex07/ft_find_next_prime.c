/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bucolak <bucolak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:56:32 by bucolak           #+#    #+#             */
/*   Updated: 2024/08/27 18:04:26 by bucolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1 || n % 2 == 0)
		return (0);
	if (n == 2)
		return (1);
	while (i <= n / i)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	while (!prime(i))
	{
		i++;
	}
	return (i);
}
