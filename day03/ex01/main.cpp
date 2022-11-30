/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:15:20 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/01 00:00:50 by mmoutawa         ###   ########.fr       */
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
    // other.takeDamage(13);
    // other.takeDamage(0);
    other.attack("one");
}
