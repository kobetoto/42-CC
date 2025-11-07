/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:20:59 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/07 13:44:49 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
#define HUMANB_H
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
    // Const/Dest
    HumanB(std::string const name);
    ~HumanB(void);

    
    // Member f()
    void setWeapon(Weapon& w);
    void attack(void) const;

private:
    std::string const _name;
    Weapon *_WeaponB_ptr;
};

#endif //HUMANB_H
