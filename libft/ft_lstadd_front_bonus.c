/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:42:02 by ahgutier          #+#    #+#             */
/*   Updated: 2025/11/03 20:42:02 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main(void)
{
	t_list *lst = NULL;

	ft_lstadd_front(&lst, ft_lstnew("uno"));
	ft_lstadd_front(&lst, ft_lstnew("dos"));
	ft_lstadd_front(&lst, ft_lstnew("tres"));

	t_list *tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
} */

/*
new->next = *lst;  // El nuevo apunta al antiguo primero
*lst = new;        // Ahora la cabeza de la lista pasa a ser 'new'
*/
