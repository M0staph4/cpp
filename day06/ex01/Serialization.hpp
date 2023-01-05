/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:13:18 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/05 22:41:29 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
typedef struct Data {
    int x;
    char y;
}   Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif

