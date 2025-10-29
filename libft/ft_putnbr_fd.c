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

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = (long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd((int)(nb / 10), fd);
	c = (char)((nb % 10) + '0');
	write(fd, &c, 1);
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
