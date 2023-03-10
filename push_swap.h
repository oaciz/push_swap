/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaciz <oaciz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:14:13 by oaciz             #+#    #+#             */
/*   Updated: 2023/01/15 03:20:46 by oaciz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "42-Libft-master/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	a_size;
	int	b_size;
	int	*each_arg_c;
}t_stack;

void	radix_sort(t_stack *stack);
void	change_to_bit(t_stack *stack, int j);
void	five_sort_extra(t_stack *stack);
void	extra(t_stack *stack);
void	ft_index(t_stack *stacks);
void	ft_error(void);
void	ft_isthr_cpy(t_stack *stacks);
void	ft_general_check(char *str);
void	ft_check_arg(int ac, char **argv, t_stack *stacks);
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack);
void	ft_pa(t_stack *stack);
void	ft_pb(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rrr(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_ra(t_stack *stack);
void	ft_rr(t_stack *stack);
void	ft_set_stack(t_stack *stacks, int ac, char **av);
void	ft_sorting(t_stack *stack);
void	three_sort(t_stack *stack);
long	ft_atol(char *str);
int		ft_count_of_num(char *str, t_stack *stacks, int ac);
int		find_plc(int i, t_stack *stacks);
int		ft_is_sorted(t_stack *stacks);

#endif