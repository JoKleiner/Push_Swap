/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:24:19 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:45:26 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Converts a lowercase letter to uppercase.
int	ft_toupper(int cha)
{
	if (cha >= 'a' && cha <= 'z')
		cha = cha - 32;
	return (cha);
}
