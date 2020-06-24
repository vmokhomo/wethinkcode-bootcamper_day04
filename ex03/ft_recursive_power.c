/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:02:06 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/22 15:07:12 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	#include <unistd.h>

	void ft_putchar(char c)
	{
		write(1, &c, 1);
	}
*/
int ft_recursive_power(int nb, int power)
{
	if(power != 0)
		return(nb * ft_recursive_power(nb, power - 1));
	else
		return(1);	
}
