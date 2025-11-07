/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:11:38 by thodavid          #+#    #+#             */
/*   Updated: 2025/10/30 17:01:56 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <src/phoneBook.hpp>
#include <string>
#include <stdlib.h>
#include <string>
#include <stdlib.h>
#include <iomanip> // std::setw
#include <sstream> // stringstream

/**
 *MAIN
 */
int main(void)
{
    PhoneBook pb;

    std::cout << "Please enter a command: ADD, SEARCH or EXIT!" << std::endl;
    while (true)
    {
        std::cout << "> ";
        std::string cmd;

        if (!std::getline(std::cin, cmd))
        {
            std::cout << "Err: Getline | EXIT\n";
            exit(1);
        }
        if (cmd == "ADD")
            pb.add();
        if (cmd == "SEARCH")
            pb.search();
        if (cmd == "EXIT")
            return (0);
    }
    return (0);
}
