/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:14:10 by thodavid          #+#    #+#             */
/*   Updated: 2025/10/31 14:32:19 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip> // std::setw

class Contact
{
public:
    Contact(void);
    ~Contact(void);

    void setFirstName(std::string str);
    void setLastName(std::string str);
    void setNickName(std::string str);
    void setPhoneNumber(std::string str);
    void setDarkSecret(std::string str);

    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickName(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkSecret(void) const;

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string dark_s;
};

#endif // CONTACT_H
