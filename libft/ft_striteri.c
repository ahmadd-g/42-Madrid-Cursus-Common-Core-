/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:57:19 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:57:19 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	to_lower_even(unsigned int i, char *c)
{
	if (*c % 2 == 0 && (*c >= 65 && *c <= 90))
		*c += 32;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* int	main()
{
	char	hum[] = "HOlaa";
	ft_striteri(hum, to_lower_even);
	printf("%s", hum); // hOlaa
} */
