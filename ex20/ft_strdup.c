/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:22:56 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/09 14:23:18 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	int		iteration;
	char	*duplicate;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	duplicate = (char *)malloc(counter + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	while (iteration <= src[iteration])
	{
		duplicate[iteration] = src[iteration];
		iteration++;
	}
	return (duplicate);
}

int	main(void)
{
	char	*original;
	char	*dup;

	original = "Test";
	dup = ft_strdup(original);
	if (dup == NULL)
	{
		printf("Error: NULL");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Duplicada: %s\n", dup);
	free (dup);
	return (0);
}
