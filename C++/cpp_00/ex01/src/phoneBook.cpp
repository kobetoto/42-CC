/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:52:54 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/02 09:15:06 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include "utils.hpp"
#include "contact.hpp"

/**
 *CONST + DEST
 */
PhoneBook::PhoneBook(void)
{
    this->index = -1;
    this->total_contact = 0;
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

/**
 *PHONEBOOK CMD
 */
bool strIsAscii(std::string s){
    int i = 0;
    while (s[i])
    {
        if(s[i] >= 32 && s[i++] <= 126)
            continue;
        else
            return (false);
    }
    return (true);
}

void PhoneBook::add(void)
{
    if (this->index == -1 || this->index == 8)
        this->index = 0;

    Contact c;
    // firstName
    std::string var;
    std::cout << "First name: ";
    if (!std::getline(std::cin, var))
    {
        std::cout << "Err: Getline | EXIT\n";
        exit(1);
    }
    else
    {
        if(strIsAscii(var))
            this->arr[this->index].setFirstName(var);
        else
            this->arr[this->index].setFirstName("UNKNOWN");
    };

    // LastName
    std::cout << "Last name: ";
    if (!std::getline(std::cin, var))
    {
        std::cout << "Err: Getline | EXIT\n";
        exit(1);
    }
    else
    {
        if(strIsAscii(var))
            this->arr[this->index].setLastName(var);
        else
            this->arr[this->index].setLastName("UNKNOWN");
    }

    // NickName
    std::cout << "Nickname: ";
    if (!std::getline(std::cin, var))
    {
        std::cout << "Err: Getline | EXIT\n";
        exit(1);
    }
    else
    {
        if(strIsAscii(var))
            this->arr[this->index].setNickName(var);
        else
            this->arr[this->index].setNickName("UNKNOWN");
    }

    // PhoneNumber
    std::cout << "Phone Number: ";
    if (!std::getline(std::cin, var))
    {
        std::cout << "Err: Getline | EXIT\n";
        exit(1);
    }
    else
    {
        if(strIsAscii(var))
            this->arr[this->index].setPhoneNumber(var);
        else
            this->arr[this->index].setPhoneNumber("UNKNOWN");
    }

    // DarkSecret
    std::cout << "Dark Secret: ";
    if (!std::getline(std::cin, var))
    {
        std::cout << "Err: Getline | EXIT\n";
        exit(1);
    }
    else
    {
        if(strIsAscii(var))
            this->arr[this->index].setDarkSecret(var);
        else
            this->arr[this->index].setDarkSecret("UNKNOWN");
    }

    // index
    this->index++;
    if (this->total_contact < 8)
        this->total_contact++;
    return;
}

void PhoneBook::search(void)
{
    if (this->index == -1)
    {
        std::cout
            << "NO CONTACT!"
            << '\n'
            << "HINT: ==use ADD command=="
            << '\n';
        return;
    }
    else
        print_pb();

    std::cout << "Enter an index (0 to 7) to display contact: ";
    std::string user_index;

    if (!std::getline(std::cin, user_index))
    {
        std::cout << "Err: Getline | EXIT\n";
        exit(1);
    }
    while (true)
    {
        if (user_index.length() != 1 || user_index[0] < '0' || user_index[0] > '8')
        {
            std::cout << "-404- contact not found" << '\n';
            std::cout << "Enter an index (0 to 7) to display contact: ";
            if (!std::getline(std::cin, user_index))
            {
                std::cout << "Err: Getline | EXIT\n";
                exit(1);
            }
            continue;
        }
        int i = std::stoi(user_index);
        if (i < this->total_contact)
        {
            print_contact(this->arr[i]);
            break;
        }
        else
        {
            std::cout << "-404- contact not found" << '\n';
            std::cout << "Enter an index (0 to 7) to display contact: ";
            if (!std::getline(std::cin, user_index))
            {
                std::cout << "Err: Getline | EXIT\n";
                exit(1);
            }
            continue;
        }
    }
    return;
}

void PhoneBook::print_pb(void)
{

    unsigned int i = 0;

    std::cout << " ___________________________________________" << '\n';
    std::cout << "|   INDEX  | FIRSTNAME| LASTNAME | NICKNAME |" << '\n';
    std::cout << " ------------------------------------------- " << '\n';
    while (i < this->total_contact)
    {
        print_line(this->arr[i], i);
        std::cout << '\n';
        i++;
    }
    std::cout << "|___________________________________________|" << '\n';
}
