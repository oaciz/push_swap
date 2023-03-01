/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaciz <oaciz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:52:54 by oaciz             #+#    #+#             */
/*   Updated: 2023/01/15 16:35:50 by oaciz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_sort_extra(t_stack *stack)
{
	ft_pb(stack);
	three_sort(stack);
	ft_pa(stack);
	ft_pa(stack);
	ft_ra(stack);
	ft_ra(stack);
}

void	extra(t_stack *stack)
{
	ft_pb(stack);
	three_sort(stack);
	ft_rrb(stack);
	ft_pa(stack);
	ft_ra(stack);
}
