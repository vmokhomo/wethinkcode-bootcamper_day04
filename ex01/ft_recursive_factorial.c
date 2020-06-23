/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:47:06 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/22 10:49:02 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
**	#include <stdlib.h>
**
**	void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
int ft_recursive_factorial(int nb)
{
	if(nb  == 0)
		return(1);
	else
		//int nbs = ft_recursive_factorial(nb -1);
		return(nb * ft_recursive_factorial(nb - 1));
}
/*
**	int main()
**	{
**		ft_putchar(ft_recursive_factorial(5 + '0'));
**	}
*/
