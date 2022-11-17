/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:51:42 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/15 20:51:43 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = -1;
    if (N > 0)
    {
        Zombie *zombie = new Zombie[N];
        if(!zombie)
            return(NULL);
        while(++i < N)
            zombie[i].setName(name);
        return zombie;
    }
    return(NULL);
}