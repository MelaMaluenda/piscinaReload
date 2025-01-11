/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaluend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:21:43 by bmaluend          #+#    #+#             */
/*   Updated: 2025/01/09 17:04:58 by bmaluend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

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
			iteration ++;
		}
		ft_putchar('\n');
		counter ++;
	}
}

int	main(int argc, char *argv[])
{
	ft_print_params(argc, argv);
	return (0);
}
