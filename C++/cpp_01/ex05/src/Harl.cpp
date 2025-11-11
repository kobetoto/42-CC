/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:45:38 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/11 17:57:36 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !" 
    << '\n';
    return;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
    << '\n';
    return;
}

void Harl::warning(void)
{
    std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." 
    << '\n';
    return;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << '\n';
    return;
}

std::string* toUpper_string( std::string level ){
    std::string s;
    for (size_t i = 0; i < level.size(); i++){
        s[i] = toupper(level[i]);
    }
    return (&s);
}

void Harl::complain( std::string level ){

    std::string *s = toUpper_string(level);
    std::cout << *s;
    // if (level == "DEBUG")
    //     this->debug();
    // if (level == "INFO")
    //     this->info();
    // if (level == "WARNING")
    //     this->warning();
    // if (level == "ERROR")
    //     this->error();
}
