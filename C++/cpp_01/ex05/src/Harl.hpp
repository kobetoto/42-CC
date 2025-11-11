/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:31:43 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/11 17:50:43 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

class Harl{
    public:
        void complain( std::string level );
        void (Harl::*DEBUG_ptr)() = &Harl::debug;
        void (Harl::*INFO_ptr)() = &Harl::info;
        void (Harl::*WARNING_ptr)() = &Harl::warning;
        void (Harl::*ERROR_ptr)() = &Harl::error;

    private:
        void debug  ( void );
        void info   ( void );
        void warning( void );
        void error  ( void );
};
