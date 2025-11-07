/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:02:29 by thodavid          #+#    #+#             */
/*   Updated: 2025/10/31 14:31:04 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


/**
 *CONST + DEST
 */
Contact::Contact(void)
{
    // std::cout << "Hello from contact Constructor" << std::endl;
    return;
}

Contact::~Contact(void)
{
    // std::cout << "Hello from contact destructor" << std::endl;
    return;
}


    void Contact::setFirstName(std::string str) { first_name = str; }
    void Contact::setLastName(std::string str) { last_name = str; }
    void Contact::setNickName(std::string str) { nickname = str; }
    void Contact::setPhoneNumber(std::string str) { phone_number = str; }
    void Contact::setDarkSecret(std::string str) { dark_s = str; }

    std::string Contact::getFirstName(void) const { return first_name; }
    std::string Contact::getLastName(void) const { return last_name; }
    std::string Contact::getNickName(void) const { return nickname; }
    std::string Contact::getPhoneNumber(void) const { return phone_number; }
    std::string Contact::getDarkSecret(void) const { return dark_s; }
