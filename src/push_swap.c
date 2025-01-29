/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:40:32 by joklein           #+#    #+#             */
/*   Updated: 2025/01/29 15:09:23 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a_end(t_list **a_one)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *a_one;
	while (temp->num != f_min(a_one))
	{
		i++;
		temp = temp->next;
	}
	while ((*a_one)->num != f_min(a_one))
	{
		if (i > count_stack(a_one) / 2)
			re_rotate(a_one, 1);
		else
			rotate(a_one, 1);
	}
}

void	sorting(t_list **a_one, t_list **b_one)
{
	if (count_stack(a_one) < 3)
	{
		if ((*a_one)->num != f_min(a_one))
			rotate(a_one, 1);
		return ;
	}
	if (count_stack(a_one) == 3)
	{
		sort_three(a_one);
		return ;
	}
	while (count_stack(a_one) != 3 && !is_sort(a_one))
		push(b_one, a_one, 1);
	calc_low_push_a(a_one, b_one);
	rotate_a_end(a_one);
}

int	arg_to_alst(t_list **a_one, int argc, char **argv)
{
	t_list	*a_cur;
	int		i;
	int		check_free;

	i = 1;
	check_free = 0;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (argv == NULL)
			return (1);
		i--;
		check_free = 1;
	}
	while (argv[i])
	{
		a_cur = ft_lstnew(ft_atoi(argv[i]));
		if (a_cur == NULL)
			return (ft_lstclear(a_one), 1);
		ft_lstadd_back(a_one, a_cur);
		i++;
	}
	if (check_free == 1)
		ft_memfree(argv, i);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*a_one;
	t_list	*b_one;

	a_one = NULL;
	b_one = NULL;
	if (argc <= 1)
		return (0);
	if (check_arg(argv) == 1)
		return (write(2, "Error\n", 6), 1);
	if (arg_to_alst(&a_one, argc, argv) == 1 || check_double_int(&a_one) == 1)
		return (write(2, "Error\n", 6), 1);
	if (a_one)
		sorting(&a_one, &b_one);
	ft_lstclear(&a_one);
	return (0);
}
// print_func(*a_one, *b_one);
// system("leaks push_swap");
// bash loop.sh 5 100
