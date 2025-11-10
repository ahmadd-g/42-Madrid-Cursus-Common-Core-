/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:41:54 by ahgutier          #+#    #+#             */
/*   Updated: 2025/11/03 19:41:54 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* int main()
{
    t_list *n;

    n = ft_lstnew("hola mundo");
    if (!n)
        return (1);
    printf("content: %s\n", (char *)n->content);
    printf("next: %p\n", (void *)n->next);
    free(n); // solo liberamos el nodo; no liberar cadena literal
} */

/*
printf("content: %s\n", (char *)n->content);
// casteo porque content es 'void *'

printf("next: %p\n", (void *)n->next);
// debería ser NULL (va a salir una dirección de memoria '0x0')
*/
