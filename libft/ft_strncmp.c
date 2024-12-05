/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:25:24 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/25 09:34:27 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			result_s1;

	i = 0;
	result_s1 = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && s1[i] && s2[i])
	{
		result_s1 = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (result_s1 != 0)
			return (result_s1);
		i++;
	}
	result_s1 = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result_s1);
}
/*
void test(char *s1, char *s2, int i)
{
        printf("ft_strncmp('%s', '%s') : '%d'\n"
	, s1, s2, ft_strncmp(s1, s2, i));
        printf("strncmp('%s', '%s') : '%d'\n--------------\n"
	, s1, s2, strncmp(s1, s2, i));
}

int main()
{
        test("abcabaababcaba", "abcab", 4);
        test("Hello", "Hello",2);
        test("Hello", "Hellooo",6);
        test("Hello", "",2);
        test("", "Hellooo",1);
        test("", "",3);
        test("a Aq", "A aq",0);
}
         

int main()
{
   char s1[] ="hello";
   char s2[] ="hello"; 	
   int rslt_f = ft_strncmp(s1,s2,2);
   printf("RESULTAT ==> %i\n", rslt_f);
   printf("\n");


   char s1_1[] ="hello";
   char s2_1[] ="h";
   int rslt_f1 = ft_strncmp(s1_1,s2_1,6);
   printf("RESULTAT ==> %i\n", rslt_f1);
   printf("\n");


   char s1_2[] ="h";
   char s2_2[] ="hello";
   int rslt_f2 = ft_strncmp(s1_2,s2_2,0);
   printf("RESULTAT ==> %i\n", rslt_f2);
   printf("\n");

}
*/
