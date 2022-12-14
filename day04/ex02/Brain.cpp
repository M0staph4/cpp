/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:27:36 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/14 13:21:05 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called"<< std::endl;
}


Brain::Brain(const Brain& CP)
{
    std::cout <<"Brain copy constructor called" <<std::endl;
    *this = CP;
}

Brain &Brain::operator=(const Brain &OB)
{

    std::cout <<"Brain destructor called" <<std::endl;
    int i = -1;
    while(++i < 100)
        this->ideas[i] = OB.ideas[i];
    return *this;
}

void Brain::SetBrain(std::string Brain)
{
    int i = -1;
    while(++i < 100)
        this->ideas[i] = Brain;
}

std::string Brain::getIdeas(int i) const
{
    return this->ideas[i];
}

Brain::~Brain()
{
    std::cout <<"Brain destructor called" <<std::endl;
}