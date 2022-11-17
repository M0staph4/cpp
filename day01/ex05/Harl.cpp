<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:52:12 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/16 18:20:30 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> 5f2297af219a834697f35f3605f6af8223d7817e
#include "Harl.hpp"

void Harl::debug()
{
<<<<<<< HEAD
    std::cout << "I love having extra bacon for my ";
    std::cout<<"7XL-double-cheese-triple-pickle-specialketchup burger.\n";
    std::cout<<"I really do!"<<std::endl;
=======
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
>>>>>>> 5f2297af219a834697f35f3605f6af8223d7817e
}

void Harl::info()
{
<<<<<<< HEAD
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout<<"You didn’t put enough bacon in my burger! If you did, ";
    std::cout<<"I wouldn’t be asking for more!"<<std::endl;
=======
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t  be asking for more!"<<std::endl;
>>>>>>> 5f2297af219a834697f35f3605f6af8223d7817e
}

void Harl::warning()
{
<<<<<<< HEAD
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl;
=======
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since  last month."<<std::endl;
>>>>>>> 5f2297af219a834697f35f3605f6af8223d7817e
}

void Harl::error()
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
<<<<<<< HEAD
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
=======
    if (level == "DEBUG")
        this->debug();
    else if (level == "INFO")
        this->info();
    else if (level == "WARNING")
        this->warning();
    else if (level == "ERROR")
        this->error();
>>>>>>> 5f2297af219a834697f35f3605f6af8223d7817e
}