/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:46:08 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/12 15:12:37 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
