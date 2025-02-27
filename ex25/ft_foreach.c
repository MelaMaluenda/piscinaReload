/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:26:37 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/09 19:10:02 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	counter;

	counter = 0;
	if (tab == NULL || length <= 0)
		return ;
	while (counter < length)
	{
		f(tab[counter]);
		counter++;
	}
}
