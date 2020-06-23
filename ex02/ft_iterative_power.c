#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_iterative_power(int nb, int power)
{
/*	int total;

	total = 1;
	if(nb == 0 || power == 0)
		ft_putchar(0);
	if(nb <= power)
	{
			total = nb * power;    
	}
	else
	{
		total = nb * power;
	}*/

	while(power != 0)
	{
		total = total * nb;
		--Power;
	//	power = power/2;
	//	nb = nb * nb;
		//printf("%d", nb);
	}
	return total;
}
int main()
{
	int n=2;
	int m=2;
	printf("%d", ft_iterative_power(n, m));
	
	return(0);
}
