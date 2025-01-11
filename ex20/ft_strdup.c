/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:22:56 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/11 13:43:29 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		++counter;
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		i;

	i = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(char) * (i + 1));
	if (duplicate == NULL)
		return (0);
	i = -1;
	while (src[++i])
		duplicate[i] = src[i];
	duplicate[i] = '\0';
	return (duplicate);
}
