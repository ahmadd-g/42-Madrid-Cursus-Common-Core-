/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:57:05 by ahgutier          #+#    #+#             */
/*   Updated: 2025/10/13 13:57:05 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(char const	*s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*ft_strdup(const char	*s)
{
	char	*res;
	char	*temp;

	res = (char *)malloc(sizeof(char) * ft_slen(s) + 1);
	if (!(res))
		return (NULL);
	temp = res;
	while (*s)
		*temp++ = *s++;
	*temp = '\0';
	return (res);
}

/* int	main()
{
	char	str[] = "HOlaa";
	char	*ptr = ft_strdup(str);

	if (ptr == NULL)
		printf("Ha sido nulo");
	printf("Cadena copiada: %s\n", ptr);
	printf("Dirección de memoria: %p\n", ptr);
	free(ptr);
} */
