/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:52:17 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/17 11:36:17 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index >= 2)
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	else
		return (index);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int index;

	if (argc ==2)
	{	
		index = atoi(argv[1]);
		printf("Your Result: %d", ft_fibonacci(index));
	}
	else
		printf("Please just use one number as the Fibonacci Index");
}
*/
