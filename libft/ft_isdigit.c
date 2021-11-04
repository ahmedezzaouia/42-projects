/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:27:12 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 18:55:22 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_isdigit(int c)
{
	unsigned char	k;

	k = c;
	if (!(k >= '0' && k <= '9'))
		return (0);
	return (1);
}
/*
int main()
{
	char *str = "ahmed45";
	int i = 0;
	while (str[i])
		printf("%d\n",ft_isdigit(1));
}
*/
