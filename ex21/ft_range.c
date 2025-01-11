/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:23:26 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/09 17:00:13 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	counter;
	int	*arr;

	counter = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
	{
		return (NULL);
	}
	while (min < max)
	{
		arr[counter] = min;
		counter++;
		min++;
	}
	return (arr);
}
