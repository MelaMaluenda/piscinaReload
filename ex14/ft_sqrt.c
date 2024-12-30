/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:15:43 by bmaluend          #+#    #+#             */
/*   Updated: 2024/12/30 19:55:58 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
		return (0);
	while (counter * counter <= nb)
	{
		if (counter * counter == nb)
		{
			return (counter);
		}
		counter++;
	}
	return (0);
}
