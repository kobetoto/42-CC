/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:38:21 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/22 17:52:55 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = (t_list *) malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}
/*
int main()
{
	int	i = 24;
	int *kobe = &i;

	t_list *test;
	test = ft_lstnew(kobe);

	printf("node -> content: ==%p=\n\n", test->content);
	printf("node -> next: ==%p==\n\n", test->next);

}
*/
