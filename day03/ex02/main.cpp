/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:15:20 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/03 15:38:58 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    // ClapTrap one;
    FragTrap other("lol");

    other.takeDamage(4);
    other.beRepaired(0);
    other.takeDamage(100);
    other.takeDamage(0);
    other.attack("one");
}
