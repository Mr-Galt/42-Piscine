/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:20:48 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/20 13:17:41 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("01234567890abcdef"[str[i] / 16]);
			ft_putchar("01234567890abcdef"[str[i] % 16]);
		}
		i++;
	}
}

/*
int	main(void)
{	
	ft_putstr_non_printable("Martin\ngeht es gut.");
	ft_putchar('\n');
	ft_putstr_non_printable("Aber wa\trum ge\vht es ihm g\0ut?");
	ft_putchar('\n');
	ft_putstr_non_printable("");
	ft_putchar('\n');
}
*/
