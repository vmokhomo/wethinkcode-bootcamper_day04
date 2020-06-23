/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:36:45 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/22 09:48:44 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	#include <unistd.h>
**	#include <stdio.h>
**
**
**  void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/

int ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	i = 1;
	fact = 1;
	if(nb < 0)
	{
		ft_putchar(1);
	}
	else
	{
		while(i <= nb)
		{
			fact = fact * i;
			i++;
		}
		printf("%d", fact);
	}
	return(fact);
}

/*	int main()
**	{
**		return(ft_iterative_factorial(5));
**	}
*/
