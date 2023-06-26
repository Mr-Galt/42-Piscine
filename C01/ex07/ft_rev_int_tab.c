/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:19:36 by mheinke           #+#    #+#             */
/*   Updated: 2023/05/23 13:31:29 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*
#include <stdio.h>

int main()
{
    int tabelle[8] = {0, 1, 2, 3, 4, 5, 6 ,7};
    int size = 8;

    printf("Your numbers: ");
    for (int i = 0; i < size; i++) 
        printf("%d ", tabelle[i]);
    printf("\n");
    printf("Size of your Array: %d\n", size);
    printf("Your new numbers: ");
    ft_rev_int_tab(tabelle, size);
    for (int i = 0; i < size; i++) 
        printf("%d ", tabelle[i]);
}
*/
