/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:12:50 by thodavid          #+#    #+#             */
/*   Updated: 2025/10/31 10:02:36 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip> // std::setw
#include "contact.hpp"

class PhoneBook{
    public:
        Contact arr[8];
        int     index;
        int     total_contact;

        void    add();
        void    search();
        void    print_pb();

        PhoneBook(void);
        ~PhoneBook(void);
        
};

#endif // PHONEBOOK_H
