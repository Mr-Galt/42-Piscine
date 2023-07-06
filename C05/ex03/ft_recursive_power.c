/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:07:45 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/17 11:33:18 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power != 0)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int number;
	int power;
		
	if (argc == 3)
	{
		number = atoi(argv[1]);
		power = atoi(argv[2]);
		printf("Result for %d power %d: %d\n", number, power,
				ft_recursive_power(number, power));
	}
	if (argc > 3)
		printf("Please use just two arguments, a number and the power.");
	if (argc < 3)
		printf("You need to use two arguments, a number and the power.");
}
*/
