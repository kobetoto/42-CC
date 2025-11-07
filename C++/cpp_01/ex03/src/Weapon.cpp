/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:15:06 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/06 13:44:34 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


/**
 * const+dest
 */
Weapon::Weapon(std::string type) : _type(type){
    std::cout << "Hello from Weapon CONSTr" << '\n';
}

Weapon::~Weapon(void){
    std::cout << "Bye from Weapon DESTr" << '\n';
}

/**
 * get+set
 */
std::string const & Weapon::getType(void) const{
    return ( this->_type);
}

void Weapon::setType(std::string newType){
    this->_type = newType;
}
