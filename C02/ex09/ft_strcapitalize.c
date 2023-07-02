/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:04:34 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/20 12:11:36 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	i = 0;
	capital = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capital == 1)
			{
				str[i] -= 32;
			}
			capital = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capital = 0;
		else
			capital = 1;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
 	char str1[] = "ich bin ein berliner? ja, ich bin einer.";
 	char str2[] = "dfgk fdgl eo46= sdg-gg sadf, gfsdg?";
 	printf("OG Input str1: %s\n", str1);
	printf("Output str1: %s\n", ft_strcapitalize(str1));
	write(1, "\n", 1);
	printf("OG Input str2: %s\n", str2);
 	printf("Output str2: %s\n", ft_strcapitalize(str2));
}
*/
