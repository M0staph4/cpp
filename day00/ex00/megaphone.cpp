/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:32:39 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/09/09 11:33:13 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main (int ac, char **av)
{
    int i;
    int j = 0;
    if(ac > 1)
    {
        i = -1;
        while(av[++j])
        {
            i = -1;
            while(av[j][++i])
                std::cout<<(char)toupper(av[j][i]);
            std::cout<<std::endl;
        }
    }
    else
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}