/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:37:41 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/22 14:50:45 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*	void ft_putchar(char c)
**	{
**		write(1, &c 1);
**	}
*/
int ft_sqrt(int nb)
{
	int root;
	float temp;

	root = nb / 2;
	temp = 0;

	while(root != temp)
	{
		temp = root;

		root = (number/temp + temp)/2;
	}
	ft_putchar(root);
}
