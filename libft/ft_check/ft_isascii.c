/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:24:29 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:49:54 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Checks if a character is part of the ASCII set.
int	ft_isascii(int cha)
{
	if (cha >= 0 && cha <= 127)
		return (1);
	return (0);
}
