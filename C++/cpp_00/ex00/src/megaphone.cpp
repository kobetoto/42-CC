/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:01:53 by thodavid          #+#    #+#             */
/*   Updated: 2025/10/30 15:32:29 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int megaphone(int ac, char **av)
{
    if (ac < 2)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", (0));

    unsigned int j;
    int i;

    i = 1;
    j = 0;
    while (av[i])
    {
        j = 0;
        unsigned char c;
        while ((c = av[i][j]))
        {
                c = std::toupper(c);
                std::cout << c;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
