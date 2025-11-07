/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:19:57 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/07 13:45:42 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/**
 * const+dest
 */
HumanB::HumanB(std::string const name) : _name(name){
    std::cout << "Hello from HumanB CONSTr" << '\n';
    this->_WeaponB_ptr = NULL;
}

HumanB::~HumanB(void){
    std::cout << "Bye from HumanB DESTr" << '\n';
}

/**
 * Member f()
 */
void HumanB::attack(void) const{

    Weapon *w = this->_WeaponB_ptr;
    std::cout << this->_name
              << " attacks with their "
              << (w->getType())
              << '\n';
}

void HumanB::setWeapon(Weapon& w){
    this->_WeaponB_ptr = &w;
}
