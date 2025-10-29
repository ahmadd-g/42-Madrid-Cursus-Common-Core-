/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 11:55:08 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/04 11:55:08 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return ((int)(num * sign));
}

/* int	main()
{
	char	arr[] = " 	 --+-1234ab64537";
	printf("%d\n", ft_atoi(arr)); // 0
	char	arr2[] = " 	 --+-avsx";
	printf("%d\n", ft_atoi(arr2)); // 0
	char	arr3[] = " 	 -42"; 
	printf("%d\n", ft_atoi(arr3)); // -42
	char	arr4[] = " 	 +42";
	printf("%d\n", ft_atoi(arr4)); // 42
	char	arr5[] = " 42";
	printf("%d\n", ft_atoi(arr5)); // 42
	char	arr6[] = " 	--42";
	printf("%d\n", ft_atoi(arr6)); // 0
	char	arr7[] = " 	+++42";
	printf("%d\n", ft_atoi(arr7)); // 42
	char	arr8[] = " 	 -1234ab64537";
	printf("%d\n", ft_atoi(arr8)); // -1234
} */

//Es la del manual / examen y no la de la piscina..
