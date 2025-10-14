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

// #include <stdio.h>

int	ft_atoi(const char	*str)
{
	int	signo;
	int	num;

	signo = 0;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signo++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if (signo > 1)
		return (0);
	else if (signo == 1)
		return -(num);
	else
		return (num);
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
