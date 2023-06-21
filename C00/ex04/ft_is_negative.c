/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:34:03 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/04 11:54:18 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	status;

	status = 'P';
	if (n < 0)
	{
		status = 'N';
	}
	else
	{
	status = 'P';
	}
	write(1, &status, 1);
}
