/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:09:29 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/05 22:02:14 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Serialization.hpp"
int main ()
{
    Data *a = new Data;
    a->x = 5;
    a->y = 'c';
    std::cout << a->x << std::endl;
    uintptr_t i = serialize(a);
    // int *r = reinterpret_cast <int*> (i);
    // std::cout << *r << std::endl;
    // r++;
    // char *c = reinterpret_cast <char *> (r);
    // std::cout << *c << std::endl;
    std::cout << a->x << std::endl;
    a = deserialize(i); 
}