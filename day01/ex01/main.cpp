/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:51:31 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/16 22:04:52 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = -1;
    int x = 11;
    Zombie *zombie;
    zombie = zombieHorde(x, "boo");
    if(zombie)
    {
        while(++i < x)
            zombie[i].anounce();
        delete[] zombie;
    }
}
