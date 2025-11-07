/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:29:08 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/04 16:08:21 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/*
Write a program that contains:
• string variable initialized to "HI THIS IS BRAIN".
•stringPTR: a pointer to the string.
•stringREF: a reference to the string.

Your program must print:
•The memory address of the string variable.
•The memory address held by stringPTR.
•The memory address held by stringREF.


And then:
•The value of the string variable.
•The value pointed to by stringPTR.
•The value pointed to by stringREF.
*/

int main(void){
    
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << &str << '\n'; //std::cout << stringPTR << '\n';
    std::cout << stringPTR << '\n';
    std::cout << &stringREF << '\n';

    std::cout << str << '\n';
    std::cout << *stringPTR << '\n';
    std::cout << stringREF << '\n';
    
    return (0);
}
