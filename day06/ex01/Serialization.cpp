/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:04:19 by mmoutawa          #+#    #+#             */
/*   Updated: 2023/01/05 21:29:11 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast <uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast <Data*> (raw));
}