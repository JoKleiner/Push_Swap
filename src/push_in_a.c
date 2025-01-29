/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:56:11 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 14:31:16 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	cost_rotate_a(t_list *a_one, int num)
{
	t_list	*temp;
	int		cost;

	cost = 0;
	temp = a_one;
	while (temp)
	{
		if (temp->prev == NULL)
		{
			if ((num < temp->num && num > ft_lstlast(a_one)->num)
				|| ((num < f_min(&a_one) || num > f_max(&a_one))
					&& temp->num == f_min(&a_one)))
				break ;
		}
		else if ((num < temp->num && num > temp->prev->num)
			|| ((num < f_min(&a_one) || num > f_max(&a_one))
				&& temp->num == f_min(&a_one)))
			break ;
		temp = temp->next;
		cost++;
	}
	return (cost);
}

int	sw_case_3(t_list *a_one, t_list *b_one, t_list *temp_b, int num)
{
	int	cost_a;
	int	cost_b;
	int	cost;

	cost = temp_b->push_cost;
	cost_b = cost_index(b_one, num);
	cost_a = cost_rotate_a(a_one, num);
	if (count_stack(&a_one) - cost_a >= count_stack(&b_one) - cost_b)
	{
		if (count_stack(&a_one) - cost_a < cost)
		{
			cost = count_stack(&a_one) - cost_a;
			temp_b->switch_case = 3;
		}
	}
	if (count_stack(&b_one) - cost_b > count_stack(&a_one) - cost_a)
	{
		if (count_stack(&b_one) - cost_b < cost)
		{
			cost = count_stack(&b_one) - cost_b;
			temp_b->switch_case = 3;
		}
	}
	return (cost);
}

int	cost_temp(t_list *a_one, t_list *b_one, t_list *temp_b, int num)
{
	int	cost_a;
	int	cost_b;
	int	cost;

	cost_b = cost_index(b_one, num);
	cost_a = cost_rotate_a(a_one, num);
	temp_b->switch_case = 0;
	if (cost_a >= cost_b)
		cost = cost_a;
	if (cost_b > cost_a)
		cost = cost_b;
	if (cost_a + count_stack(&b_one) - cost_b < cost)
	{
		cost = cost_a + count_stack(&b_one) - cost_b;
		temp_b->switch_case = 1;
	}
	if (cost_b + count_stack(&a_one) - cost_a < cost)
	{
		cost = cost_b + count_stack(&a_one) - cost_a;
		temp_b->switch_case = 2;
	}
	temp_b->push_cost = cost;
	if (cost > sw_case_3(a_one, b_one, temp_b, num))
		cost = sw_case_3(a_one, b_one, temp_b, num);
	return (cost);
}

void	push_in_a(t_list **a_one, t_list **b_one)
{
	t_list	*temp;

	temp = find_low_push(b_one);
	if (temp->switch_case == 0)
		sw_case_zero(a_one, b_one, temp);
	if (temp->switch_case == 1)
		sw_case_one(a_one, b_one, temp);
	if (temp->switch_case == 2)
		sw_case_two(a_one, b_one, temp);
	if (temp->switch_case == 3)
		sw_case_three(a_one, b_one, temp);
	push(a_one, b_one, 2);
}

void	calc_low_push_a(t_list **a_one, t_list **b_one)
{
	t_list	*temp;

	if (count_stack(a_one) == 3)
		sort_three(a_one);
	while (count_stack(b_one) > 0)
	{
		temp = *b_one;
		temp->index = 1;
		while (temp)
		{
			temp->push_cost = cost_temp(*a_one, *b_one, temp, temp->num);
			if (find_low_push(b_one)->push_cost > temp->push_cost)
			{
				find_low_push(b_one)->index = 0;
				temp->index = 1;
			}
			temp = temp->next;
		}
		push_in_a(a_one, b_one);
	}
}
