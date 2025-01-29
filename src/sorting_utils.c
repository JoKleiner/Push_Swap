/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:26:46 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:31:22 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **pos1)
{
	t_list	*pos2;
	t_list	*pos3;

	pos2 = (*pos1)->next;
	pos3 = pos2->next;
	if (((*pos1)->num == f_min(pos1) && pos2->num > pos3->num)
		|| (pos2->num == f_min(pos1) && (*pos1)->num < pos3->num)
		|| (pos3->num == f_min(pos1) && (*pos1)->num > pos2->num))
	{
		swap(pos1, 1);
		pos2 = (*pos1)->next;
	}
	if (pos3->num == f_min(pos1))
		re_rotate(pos1, 1);
	if (pos2->num == f_min(pos1))
		rotate(pos1, 1);
}

int	count_stack(t_list **pos_one)
{
	int		i;
	t_list	*temp;

	if (*pos_one == NULL)
		return (0);
	temp = *pos_one;
	i = 0;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int	f_min(t_list **pos_one)
{
	t_list	*temp;
	int		min_num;

	temp = *pos_one;
	min_num = temp->num;
	while (temp)
	{
		if (temp->num < min_num)
			min_num = temp->num;
		temp = temp->next;
	}
	return (min_num);
}

int	f_max(t_list **pos_one)
{
	t_list	*temp;
	int		max_num;

	temp = *pos_one;
	max_num = temp->num;
	while (temp)
	{
		if (temp->num > max_num)
			max_num = temp->num;
		temp = temp->next;
	}
	return (max_num);
}
