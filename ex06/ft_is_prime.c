/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:53:55 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/22 14:59:21 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	#include <stdio/.h>
**
**	void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
int ft_is_prime(int nb)
{
	int c;
	
	whilec(c <= nb - 1)
	{
		if(nb%c == 0)
		{
			return(0);
		}	
		return(1);
		c++;
	}
}
