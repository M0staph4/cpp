/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 23:16:14 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/07 15:47:11 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{
    
}

Base *Base::generate(void)
{
    Base *a = NULL;
    if((time(NULL)) % 2 == 0)
        a = new A;
    else if(time(NULL) % 3 == 0)
        a = new B;
    else
        a = new C;
    return (a);
}

void Base::identify(Base* p)
{
    if(dynamic_cast<A*>(p) != NULL)
        std::cout<<"A"<<std::endl;
    if(dynamic_cast<B*>(p) != NULL)
        std::cout<<"B"<<std::endl;
    if(dynamic_cast<C*>(p) != NULL)
        std::cout<<"C"<<std::endl;
}

// void Base::identify(Base& p)
// {
    
// }