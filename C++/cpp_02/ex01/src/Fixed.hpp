/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 08:32:43 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/18 16:54:13 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

#include <cmath>

class Fixed {
public:
/* Polymorphisme de la fonction Fixed()*/
    Fixed(void);                         //(c) CONSTR
    Fixed(const int i);                  //    CONSTR int
    Fixed(const float f);                //    CONSTR float
    Fixed(Fixed const &src);             //(c) CONSTR by copy

    Fixed &operator=(Fixed const &rightHandSide);  //(c) operateur d'assignation (return ref on the cour.inst) =
    ~Fixed(void);                        //(c) destr

    float   getFixed_point( void ) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat( void ) const;
    int     toInt( void ) const;

private:
    int _fixed_point;
    static const int _bits;
};

//return_type operatorSYM(const Type& rhs) const;
std::ostream& operator<<(std::ostream& stream, const Fixed& rightHandSide); //    (surcharge) operateur d'assignation <<
#endif // FIXED_H
