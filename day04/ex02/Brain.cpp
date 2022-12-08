/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:27:36 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/05 20:45:19 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called"<< std::endl;
}


Brain::Brain(const Brain& CP)
{
    *this = CP;
}

Brain &Brain::operator=(const Brain &OB)
{
    int i = -1;
    while(++i < 100)
        this->ideas[i] = OB.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout <<"" <<std::endl;
}