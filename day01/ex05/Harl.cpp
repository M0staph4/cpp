/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:52:12 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/18 16:00:42 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my ";
    std::cout<<"7XL-double-cheese-triple-pickle-specialketchup burger.\n";
    std::cout<<"I really do!"<<std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout<<"You didn’t put enough bacon in my burger! If you did, ";
    std::cout<<"I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error()
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptmf[4])();

    ptmf[0] = &Harl::debug;
    ptmf[1] = &Harl::info;
    ptmf[2] = &Harl::warning;
    ptmf[3] = &Harl::error;
        
    int i = 0;

    std::string complain[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    while(i < 4)
    {
        if(level == complain[i])
            (this->*ptmf[i])();
        i++;
    }
}