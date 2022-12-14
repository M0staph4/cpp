/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:38:34 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/14 12:27:11 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string &type);
        Dog(const Dog& CP);
        Dog &operator=(const Dog& OB);
        ~Dog();
        void makeSound() const;
        std::string getType() const;
        std::string getBrain(int i) const;
};

#endif