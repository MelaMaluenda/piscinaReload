/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:21:04 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/02 20:06:00 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] && s2[counter] && s1[counter] == s2[counter])
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "NotSimilar";
	str2 = "Similar";
	printf("Comparar '%s' y '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	return (0);
}
