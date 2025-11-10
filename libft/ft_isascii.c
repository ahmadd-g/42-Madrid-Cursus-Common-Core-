/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:49:44 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:49:44 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main()
// {
// 	printf("%d", ft_isascii(12));
// 	printf("%d", ft_isascii(4012));
// 	printf("\n");
// }
