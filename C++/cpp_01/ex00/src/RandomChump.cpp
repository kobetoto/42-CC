/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 10:27:13 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/03 08:56:36 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This function creates a zombie, names it, and makes it announce itself.
void randomChump(std::string name)
{
    Zombie z;

    z.setZombieName(name);
    z.announce();
}
