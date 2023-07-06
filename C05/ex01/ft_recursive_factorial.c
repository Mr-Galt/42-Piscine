/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:59:06 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/17 11:14:19 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argv, char **argc)
{
	int a;

	(void)argv;
	a = atoi(argc[1]);
	printf("The factorial of %d is: ", a);
	printf("%d", ft_recursive_factorial(a));
}
*/
