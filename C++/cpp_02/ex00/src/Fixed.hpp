/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 08:32:43 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/17 15:59:49 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
From now on, all your classes must be designed in the Orthodox Canonical Form,
unless explicitly stated otherwise. They will then implement the four required member
functions below:
•Default constructor
•Copy constructor
•Copy assignment operator
•Destructor
-->Split your class code into two files. The header file (.hpp/.h) contains the class
definition
-->whereas the source file (.cpp) contains the implementation.
6
*/

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed{
    public:
        Fixed( void );                              //canonical constr
        Fixed( Fixed const & src );                 //canonical const par copy
        Fixed& operator=(Fixed const & rhs);       //canonical operateur d'assignation (return ref on the cour. inst)
        ~Fixed( void );                             //canonical destr
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int         _fixed_point;
        static const int   _bits;
};

#endif //FIXED_H
