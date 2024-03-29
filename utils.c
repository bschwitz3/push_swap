/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:08:28 by bschwitz          #+#    #+#             */
/*   Updated: 2022/04/11 16:24:38 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_distance(t_stack **stack, int index)
{
	t_stack	*head;
	int		dist;

	dist = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		dist++;
		head = head->next;
	}
	return (dist);
}

void	make_top(t_stack **stack, int dist)
{
	t_stack	*head;
	int		tmp;

	if (dist == 0)
		return ;
	head = *stack;
	tmp = ft_lstsize(head) - dist;
	if (dist <= (ft_lstsize(head) / 2))
	{
		while (dist-- > 0)
			ra(stack);
	}
	else
	{
		while (tmp-- > 0)
			rra(stack);
	}
}

void	free_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}
