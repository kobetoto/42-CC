/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 10:26:55 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/03 09:31:52 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This function creates a zombie, names it, and returns it so you can use it outside of the function scope.
Zombie *newZombie(std::string name)
{
    Zombie *newZ = new Zombie();
    newZ->setZombieName(name);
    return (newZ);
}
