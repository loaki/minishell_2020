/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:35:50 by lulebugl          #+#    #+#             */
/*   Updated: 2020/10/15 19:35:57 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	return (((c >= 'a' && c <= 'z'))
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'));
}