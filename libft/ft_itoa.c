/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:50:34 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:50:34 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	digit;

	digit = !n;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static char	*int_min_case(void)
{
	char	*res;

	res = malloc(12);
	if (!res)
		return (NULL);
	res[0] = '-';
	res[1] = '2';
	res[2] = '1';
	res[3] = '4';
	res[4] = '7';
	res[5] = '4';
	res[6] = '8';
	res[7] = '3';
	res[8] = '6';
	res[9] = '4';
	res[10] = '8';
	res[11] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		d_count;
	char	*res;

	if (n == -2147483648)
		return (int_min_case());
	sign = n < 0;
	d_count = digit_count(n) + sign;
	res = malloc(sizeof(char) * (d_count + 1));
	if (!res)
		return (NULL);
	res[d_count] = 0;
	if (sign)
	{
		*res = '-';
		res[--d_count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (d_count-- - sign)
	{
		res[d_count] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}

/* int	main()
{
	char	*arr_neg; 
	char	*arr_pos;

	arr_neg = ft_itoa(42);
	arr_pos = ft_itoa(-42);
    printf("El número %d en forma de string es: %s\n", ft_atoi("-42"), arr_neg);
	free(arr_neg);
    printf("El número %d en forma de string es: %s\n", ft_atoi("42"), arr_pos);
	free(arr_pos);
	printf("%s\n", ft_itoa(100));
	printf("%s\n", ft_itoa(-100));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
} */
// Para Python Tutor

/* int	main(int	ac, char	**av)
{
	char	*arr;
	int		i;

	i = 1;
	while (i < ac)
	{
		arr = ft_itoa(ft_atoi(av[i]));
		printf("El número %d en forma de string es: 
		%s\n (lo mismo aparentemente)\n", ft_atoi(av[i]), arr);
		i++;
		free(arr);
	}
} */

// Convertir el string
// res[--counter] = -(n % 10) + '0';
// En 'res = malloc(12);' ponemos '12' porque son 11 caracteres + el '\0'

/* int	ft_num_len(int num)
{
	int	current_pos;

	current_pos = 0;
	if (num < 0)
	{
		current_pos++;
		if (num == -2147483648)
		{
			num /= 10;
			current_pos++;
		}
		num *= -1;
	}
	while (num > 9)
	{
		num /= 10;
		current_pos++;
	}
	current_pos++;
	return (current_pos);
}

char	*ft_itoa(int n)
{
	int		nbr_len;
	char	*res;
	int		position;

	nbr_len = ft_num_len(n);
	res = malloc(nbr_len + 1);
	if (n == 0)
		return ("0");
	if (!res)
		return (NULL);
	position = nbr_len - 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return ("-2147483648");
		n *= -1;
		res[0] = '-';
	}
	while (n > 9)
	{
		res[position] = (n % 10) + '0';
		n /= 10;
		position--;
	}
	res[position] = n + '0';
	res[nbr_len] = '\0';
	return (res);
} */
