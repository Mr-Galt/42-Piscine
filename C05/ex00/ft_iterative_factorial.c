/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorials.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:48:26 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/15 16:34:15 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}	
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	(void)argc;
	printf("Factorial of %d is: ", a);
	printf("%d", ft_iterative_factorial(a));
}
*/
