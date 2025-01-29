/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:13:46 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:30:39 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **pos_one, int i)
{
	t_list	*temp;

	if (i == 1)
		ft_printf("ra\n");
	if (i == 2)
		ft_printf("rb\n");
	if (!*pos_one || (*pos_one)->next == NULL)
		return ;
	temp = *pos_one;
	*pos_one = (*pos_one)->next;
	(*pos_one)->prev = NULL;
	temp->next = NULL;
	ft_lstadd_back(pos_one, temp);
}

void	both_rotate(t_list **a_one, t_list **b_one)
{
	rotate(a_one, 0);
	rotate(b_one, 0);
	ft_printf("rr\n");
}
