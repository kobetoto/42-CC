/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:11:57 by thodavid          #+#    #+#             */
/*   Updated: 2025/10/31 13:50:02 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void print_index(int i)
{
    std::cout
        << std::setw(10) << i << "|";
}

void print_fields(std::string s)
{
    if (s.length() > 10)
        s = s.substr(0, 9) + ".";
    std::cout << std::setw(10) << s << "|";
}

void print_line(Contact c, int i)
{

    std::cout << "|";
    print_index(i);
    print_fields(c.getFirstName());
    print_fields(c.getLastName());
    print_fields(c.getNickName());
}

void print_contact(Contact c)
{
    std::cout << "[First Name] ";
    std::cout << c.getFirstName() << '\n';
    std::cout << "[Last Name] ";
    std::cout << c.getLastName() << '\n';
    std::cout << "[Nickname] ";
    std::cout << c.getNickName() << '\n';
    std::cout << "[Phone Number] ";
    std::cout << c.getPhoneNumber() << '\n';
    std::cout << "[Dark Secret] ";
    std::cout << c.getDarkSecret() << '\n';
}

