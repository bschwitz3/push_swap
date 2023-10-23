/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:38:22 by bschwitz          #+#    #+#             */
/*   Updated: 2022/04/11 19:00:03 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

/*typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;
*/
void			ft_check_args(int argc, char **argv);

void			index_stack(t_stack **stack);

t_stack			*ft_lstnew(int value);

void			printlist(t_stack *head);
void			ft_error(char *msg);
void			ft_free(char **str);
int				is_sorted(t_stack **stack);
int				get_distance(t_stack **stack, int index);
void			make_top(t_stack **stack, int dist);
void			free_stack(t_stack **stack);

void			simple_sort(t_stack **stack_a, t_stack **stack_b);
int				get_min(t_stack **stack, int val);
void			sort_3(t_stack **stack_a);
void			sort_5(t_stack **stack_a, t_stack **stack_b);
void			radix_sort(t_stack **stack_a, t_stack **stack_b);

int				push(t_stack **stack_to, t_stack **stack_from);
int				pa(t_stack **stack_a, t_stack **stack_b);
int				pb(t_stack **stack_a, t_stack **stack_b);
int				swap(t_stack **stack);
int				sa(t_stack **stack_a);
int				sb(t_stack **stack_b);
int				ss(t_stack **stack_a, t_stack **stack_b);
int				rotate(t_stack **stack);
int				ra(t_stack **stack_a);
int				rb(t_stack **stack_b);
int				rr(t_stack **stack_a, t_stack **stack_b);
int				reverse(t_stack **stack);
int				rra(t_stack **stack_a);
int				rrb(t_stack **stack_b);
int				rrr(t_stack **stack_a, t_stack **stack_b);

#endif
