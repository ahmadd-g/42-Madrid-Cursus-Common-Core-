/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:58:51 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:58:51 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	to_upper_even(unsigned int i, char c)
{
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        c -= 32;
	return (c);
} */

/* char	to_lower_dash_uneven(unsigned int i, char c)
{
	if (i % 2 != 0 && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		c = '_';
	return (c);
} */

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	char		*new_str;
	size_t		i;
	char		*mover;

	if (!s || !f)
		return (NULL);
	new_str = malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	mover = new_str;
	i = 0;
	while (s[i])
	{
		*mover = f(i, s[i]);
		mover++;
		i++;
	}
	*mover = '\0';
	return (new_str);
}

/* int	main()
{
	char	*eainde = "Hola mundo";
	char	*res;

	res = ft_strmapi(eainde, to_lower_dash_uneven);
	printf("Original: %s\n", eainde);
	printf("Modificada: %s\n", res);
	free(res);
} */
