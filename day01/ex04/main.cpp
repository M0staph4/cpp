/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:52:06 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/11/15 20:52:07 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
    if(ac == 4)
    {
        std::fstream read;
        std::fstream write;
        std::string file = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string newfile = file + ".replace";
        std::string check;
        std::string tmp;
        std::string line;
        int i = 0;

        read.open(file, std::ios::in);
        if(!read)
            std::cout << "file not found";
        else
            write.open(newfile, std::ios::out);
        while(std::getline(read, line))
        {
            i = line.find(s1);
            while(i >= 0 && s1 != s2)
            {
                line = line.erase(i, s1.length());
                line = line.substr(0 , i) + s2 + line.substr(i , line.length());
                i += s2.length();
                i = line.find(s1, i);
            }
            write << (line + '\n');
        }
    }
    else
        std::cout<<"The program takes three parameters\n";
    return(0);
}