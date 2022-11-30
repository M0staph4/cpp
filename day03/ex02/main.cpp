/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:15:20 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/29 23:21:51 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap other("Two");
    ClapTrap one(other);
    one.takeDamage(4);
    one.beRepaired(0);
    // one.takeDamage(13);
    // one.takeDamage(0);
    one.attack("one");
}