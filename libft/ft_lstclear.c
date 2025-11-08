/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:09:48 by ahgutier          #+#    #+#             */
/*   Updated: 2025/11/08 13:09:48 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void del_content(void *content)
{
	free(content);
} */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

// Ejemplo de uso o utilidad (no para probar..)
/* int main(void)
{
	t_list *lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("uno")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("dos")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("tres")));

	ft_lstclear(&lst, del_content);
	// ahora lst == NULL
} */

// ft_lstclear elimina todos los nodos de una lista y libera su memoria.
// Usa ft_lstdelone internamente para liberar cada nodo y su contenido, 
// y deja el puntero principal en NULL para evitar ‘dangling pointers’.
