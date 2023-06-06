/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:19:33 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 15:20:01 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* convierte el caracter "c" en minuscula */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}