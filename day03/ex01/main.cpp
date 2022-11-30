/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:15:20 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/30 23:26:24 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
    ClapTrap one;
    ScavTrap other("wach");
    other.takeDamage(4);
    other.beRepaired(0);
    // one.takeDamage(13);
    // one.takeDamage(0);
    other.attack("one");
}