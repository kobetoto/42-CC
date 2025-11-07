/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:06:20 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/04 15:02:56 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie
{
public:
    void announce(void);
    void setZombieName(std::string str);
    std::string getZombieName(void) const;
    Zombie(void);
    ~Zombie(void);

private:
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif // ZOMBIE_H
