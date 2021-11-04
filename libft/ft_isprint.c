/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:40:04 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:49:05 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_isprint(int c)
{
	return (!(c >= 0 && c < 32));
}
/*int main ()
{
	printf("%d\n",ft_isprint('\n'));
}*/
