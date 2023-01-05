/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 23:16:14 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/06 00:21:51 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


// Base::~Base()
// {}

Base * Base::generate(void)
{
    Base *a;
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
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    if(a == NULL)
        std::cout<<"A"<<std::endl;
    else if(b == NULL)
        std::cout<<"B"<<std::endl;
    else if(c == NULL)
        std::cout<<"C"<<std::endl;
}
// void identify(Base& p);