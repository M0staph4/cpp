<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:52:15 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/16 18:09:03 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP


#include <iostream>
#include <string>

class Harl {
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        void complain(std::string level);
        
};

#endif
=======
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl{
    private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    public:
        void complain(std::string level);
};

#endif
>>>>>>> 5f2297af219a834697f35f3605f6af8223d7817e
