/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:35:37 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/04 15:05:27 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    if (N <= 0)
        return NULL;

    Zombie *newZ = new Zombie[N];
    for (int i = 0; i < N; i++)
        newZ[i].setZombieName(name);

    return (&newZ[0]);
}
