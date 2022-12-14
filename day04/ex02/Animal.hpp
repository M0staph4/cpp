/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:29:38 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/13 18:32:19 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string &type);
        Animal(const Animal& CP);
        Animal &operator=(const Animal &OB);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif