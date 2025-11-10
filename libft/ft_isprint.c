/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:50:27 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:50:27 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main()
// {
// 	printf("%d\n", ft_isprint('c'));
// 	printf("%d\n", ft_isprint(23));
// 	printf("%d\n", ft_isprint(48));
// }
