/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:13:21 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:30:41 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	re_rotate(t_list **pos_one, int i)
{
	t_list	*pos_two;
	t_list	*new_end;

	if (i == 1)
		ft_printf("rra\n");
	if (i == 2)
		ft_printf("rrb\n");
	if (!*pos_one || (*pos_one)->next == NULL)
		return ;
	pos_two = *pos_one;
	*pos_one = ft_lstlast(*pos_one);
	new_end = (*pos_one)->prev;
	new_end->next = NULL;
	(*pos_one)->next = pos_two;
	if (pos_two)
		pos_two->prev = *pos_one;
	(*pos_one)->prev = NULL;
}

void	re_both_rotate(t_list **a_one, t_list **b_one)
{
	re_rotate(a_one, 0);
	re_rotate(b_one, 0);
	ft_printf("rrr\n");
}
