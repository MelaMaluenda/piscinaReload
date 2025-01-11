/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:22:22 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/02 21:34:12 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		counter;
	int		iteration;
	char	*temp;

	counter = 1;
	while (counter < argc)
	{
		iteration = counter + 1;
		while (iteration < argc)
		{
			if (ft_strcmp(argv[counter], argv[iteration]) > 0)
			{
				temp = argv[counter];
				argv[counter] = argv[iteration];
				argv[iteration] = temp;
			}
			iteration++;
		}
		counter++;
	}
}

void	ft_print_params(int argc, char *argv[])
{
	int	counter;
	int	iteration;

	counter = 1;
	while (counter < argc)
	{
		iteration = 0;
		while (argv[counter][iteration] != '\0')
		{
			ft_putchar(argv[counter][iteration]);
			iteration++;
		}
		ft_putchar('\n');
		counter++;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
