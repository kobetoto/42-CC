/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:45:21 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/07 10:26:22 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

class Weapon{
public:
    // Const/Dest
    Weapon(std::string type);
    ~Weapon(void);

    //get/set
    std::string const & getType(void) const;
    void setType(std::string newType);

private:
    std::string _type;
};

#endif // WEAPON_H
