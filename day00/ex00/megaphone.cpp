/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:32:39 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/09/14 15:58:44 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main (int ac, char **av)
{
    int i;
    int j = 0;
    std::string str;
    if(ac > 1)
    {
        i = -1;
        while(ac > ++j)
        {
            str = av[j];
            i = -1;
            while(str[++i])
                std::cout<<(char)toupper(str[i]);
            std::cout<<std::endl;
        }
    }
    else
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}