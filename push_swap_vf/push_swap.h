/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:28:20 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/26 16:58:56 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./LIBFT/libft.h"

typedef struct s_lst
{
	int				index;
	int				number;
	struct s_lst	*next;
}	t_lst;

void	ft_error(char *str);
void	ft_free_tab(char **str);
void	ft_free_stack(t_lst **stack);
void	ft_check_args(char **av, int ac);
void	ft_init_stack(t_lst **stack, char **av, int ac);
void	ft_index_stack(t_lst *stack);
void	ft_listadd_back(t_lst **stack, t_lst *new);
void	ft_two_digit_sort(t_lst **stack_a);
void	ft_three_element_sort(t_lst **stack_a);
void	ft_four_element_sort(t_lst **stack_a, t_lst **stack_b);
void	ft_five_element_sort(t_lst **stack_a, t_lst **stack_b);
void	ft_radix(t_lst **stack_a, t_lst **stack_b);
long	ft_atol_check(const char *nptr);
int		ft_isnum(char *s);
int		ft_listsize(t_lst *lst);
int		ft_doublon(int num, char **arg, int i);
int		ft_is_sort(t_lst *stack);
int		ft_get_max_bits(t_lst **stack);
int		ft_find_min_position(t_lst *stack);
int		swap(t_lst **stack);
int		sa(t_lst **stack_a);
int		sb(t_lst **stack_b);
int		ss(t_lst **stack_a, t_lst **stack_b);
int		push(t_lst **stack_dst, t_lst **stack_src);
int		pa(t_lst **stack_a, t_lst **stack_b);
int		pb(t_lst **stack_a, t_lst **stack_b);
int		rotate(t_lst **stack);
int		ra(t_lst **stack_a);
int		rb(t_lst **stack_b);
int		rr(t_lst **stack_a, t_lst **stack_b);
int		reverse(t_lst **stack);
int		rra(t_lst **stack_a);
int		rrb(t_lst **stack_b);
int		rrr(t_lst **stack_a, t_lst **stack_b);
t_lst	*ft_lstnew_node(int num);
t_lst	*ft_get_next_min(t_lst *stack);
t_lst	*ft_listlast(t_lst *head);
t_lst	*ft_listlast(t_lst *lst);

#endif
