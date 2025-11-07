/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:52:58 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/06 13:47:30 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/**
 * const+dest
 */
HumanA::HumanA(std::string const name, Weapon& w) : _name(name), _WeaponA(w){
    std::cout << "Hello from HumanA CONSTr" << '\n';
}

HumanA::~HumanA(void){
    std::cout << "Bye from HumanA DESTr" << '\n';
}

/**
 * Member f()
 */
void HumanA::attack(void) const
{
    std::cout << this->_name
            << " attacks with their "
            << this->_WeaponA.getType()
            << '\n';
}
