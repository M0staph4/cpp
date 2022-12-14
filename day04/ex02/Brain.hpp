/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:46:32 by mmoutawa          #+#    #+#             */
/*   Updated: 2022/12/14 13:21:12 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string ideas[100]);
        Brain(const Brain &CP);
        Brain &operator=(const Brain &OB);
        ~Brain();
        void SetBrain(std::string Brain);
        std::string getIdeas(int i) const;
};

#endif