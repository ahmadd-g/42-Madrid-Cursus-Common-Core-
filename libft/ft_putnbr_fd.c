/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:56:25 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:56:25 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	result;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb; // O nb *= -1;
	}
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, 1);
	result = (nb % 10) + '0';
	write(fd, &result, 1);
}

/* int	main()
{
	ft_putnbr_fd(42, 1); // 42
	write(1, "\n", 1);
	ft_putnbr_fd(-42, 1); // -42
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1); // -2147483648
	write(1, "\n", 1);
	ft_putnbr_fd(-1, 1); // -1
	write(1, "\n", 1);
	ft_putnbr_fd(4, 1); // 4
	write(1, "\n", 1);
} */
