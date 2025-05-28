/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:15:07 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:50:01 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Checks if a character is a decimal digit.
int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}
