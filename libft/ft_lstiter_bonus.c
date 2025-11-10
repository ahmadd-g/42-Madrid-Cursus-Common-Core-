/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstriteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahgutier <ahgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:20:13 by ahgutier          #+#    #+#             */
/*   Updated: 2025/11/08 13:20:13 by ahgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	print_content(void *content)
{
	printf("%s\n", (char *)content);
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// Creamos por ejemplo una función que imprima contenidos
// y ésta se ve aplicada en listas mediante 'ft_lstiter'
/* int main(void)
{
	t_list *lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("uno"));
	ft_lstadd_back(&lst, ft_lstnew("dos"));
	ft_lstadd_back(&lst, ft_lstnew("tres"));

	ft_lstiter(lst, print_content);
} */
// (Es como el 'ft_striteri')
