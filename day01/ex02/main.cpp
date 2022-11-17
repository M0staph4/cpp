/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:51:45 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/15 20:51:46 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main ()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout<<"The memory address of the string variable :" << &string<<std::endl;
    std::cout<<"The memory address of the stringPTR variable :" << &stringPTR<<std::endl;
    std::cout<<"The memory address of the stringREF variable :" << &stringREF<<std::endl;

    std::cout<<"The value of the string variable :" << string<<std::endl;
    std::cout<<"The value of the stringPTR variable :" << *stringPTR<<std::endl;
    std::cout<<"The value of the stringREF variable :" << stringREF<<std::endl;
}