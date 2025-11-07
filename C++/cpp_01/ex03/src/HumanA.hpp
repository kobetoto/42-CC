/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:00:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/07 10:27:54 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_H
#define HUMANA_H
#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
    // Const/Dest
    HumanA(std::string const name, Weapon& w);
    ~HumanA(void);

    // Member f()
    void attack(void) const;

private:
    std::string const _name;
    Weapon& _WeaponA;
};

#endif //HUMANA_H
