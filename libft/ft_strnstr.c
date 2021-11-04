/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:00:01 by ahmez-za          #+#    #+#             */
/*   Updated: 2021/11/04 21:13:36 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && needle[j] && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	 l = 0;
	 while (needle[l])
		 l++;
	 if (l == j)
		 return ((char *)haystack + (i - j));
	 return (0);
}
/*int main ()
{
	printf("%s\n",ft_strnstr("Foo Bar Baz","Bar",5));
	printf("%s\n",strnstr("Foo Bar Baz","Bar",5));
}
*/
