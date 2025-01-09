/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:27:14 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/09 19:28:20 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counter;
	int	count;

	counter = 0;
	count = 0;
	while (tab[counter] != NULL)
	{
		if (f(tab[counter]) == 1)
		{
			count++;
		}
		counter++;
	}
	return (count);
}

int	is_longer_than_3(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length > 3);
}

int	main(void)
{
	char	*tab[] = {"hello", "world", "hi", "42", NULL};
	int	result;

	result = ft_count_if(tab, &is_longer_than_3);
	printf("Count: %d\n", result);
	return (0);
}
