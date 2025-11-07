/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:23:28 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/03 10:13:43 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "RandomChump.hpp"
#include "NewZombie.hpp"

int main(void){

    Zombie *n;
    n = newZombie("Mickey");
    n->announce();
    randomChump("Kobe");
    delete n;
    return (0);
}
