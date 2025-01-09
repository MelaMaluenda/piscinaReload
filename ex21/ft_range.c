/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:23:26 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/09 16:16:37 by bmaluend         ###   ########.fr       */
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

int	main(void)
{
	int	min;
	int	max;
	int	counter;
	int	*arr;

	min = 3;
	max = 10;
	arr = ft_range(min, max);
	if (arr == NULL)
	{
		printf("Error: NULL.\n");
	}
	else
	{
		counter = 0;
		while (counter < max - min)
		{
			printf("%d ", arr[counter]);
			counter++;
		}
		printf("\n");
		free(arr);
	}
	return (0);
}
