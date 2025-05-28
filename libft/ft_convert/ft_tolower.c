/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:41:11 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:45:20 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Converts an uppercase letter to lowercase.
int	ft_tolower(int cha)
{
	if (cha >= 'A' && cha <= 'Z')
		cha = cha + 32;
	return (cha);
}
