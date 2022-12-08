/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:32:32 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/04 19:35:37 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string &type);
        WrongAnimal(const WrongAnimal& CP);
        WrongAnimal &operator=(const WrongAnimal& OB);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};

#endif