/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:14:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/04 13:37:29 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * CONSTR&DESTR
 */
Zombie::Zombie(void)
{
    //std::cout << "Hello from the Const" << '\n';
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->_name << " is destroy" << '\n';
    return;
}

/**
 * SET&GET?
 */
void Zombie::setZombieName(std::string str) { _name = str; }

std::string Zombie::getZombieName(void) const { return _name; }

/**
 * SUBJECT FUNCTION
 */
void Zombie::announce(void)
{
    std::cout << this->getZombieName()
            << ": BraiiiiiiinnnzzzZ..."
            << "\n";
}
