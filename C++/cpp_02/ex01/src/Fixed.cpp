/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 08:32:40 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/18 16:56:38 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

/** CONSTs + DESTR **/
Fixed::Fixed( void ) {
    std::cout << "Default constructor called" << '\n'; 
}

Fixed::Fixed(const int x) : _fixed_point(0) {
    (void) x;
    std::cout << "Int constructor called" << '\n'; 
}

Fixed::Fixed(const float f) : _fixed_point(0) {
    (void) f;
    std::cout << "Float constructor called" << '\n'; 
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << '\n'; 
    *this = src;
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << '\n';
}

/** GET/SET **/
float   Fixed::getFixed_point( void ) const{
        return ((float) this->_fixed_point);
}



/** FONCTION MEMBRES **/
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << '\n';
    return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point = (int)raw;
}

float Fixed::toFloat( void ) const
{ 

    return (0.00);
}

int Fixed::toInt( void ) const
{

    return (0);
}

/** SURCHARGE **/
Fixed& Fixed::operator=(Fixed const &rightHandSide)
{
    std::cout << "Copy assignment operator called" << '\n';
    if (this != &rightHandSide)
        this->_fixed_point = rightHandSide.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& stream, Fixed const & rightHandSide) //    (surcharge) operateur d'assignation <<
{
    std::cout << "Copy assignment operator called" << '\n';
    stream << rightHandSide.getRawBits();
    return stream;
}
