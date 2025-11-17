/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 08:32:40 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/17 16:05:43 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_bits = 8;

Fixed::Fixed( void ) : _fixed_point(0) { std::cout << "Default constructor called" << '\n'; }
Fixed::~Fixed( void ){ std::cout << "Destructor called" << '\n'; }

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << '\n';
    *this = src;
    return;
}

Fixed& Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called" << '\n';
    if (this != &rhs)
        this->_fixed_point = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << '\n';
    return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw){
    this->_fixed_point = (int) raw;
}
