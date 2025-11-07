/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:31:13 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/04 15:13:41 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void test_horder(Zombie *arr, int len)
{
    if (len <= 0)
        return;
    for (int i = 0; i < len; i++)
    {
        std::cout << "Zombie" << i << " : " << arr[i].getZombieName() << '\n';
        std::cout << "(announce)Zombie" << i << " : ";
        arr[i].announce();
        std::cout << '\n';
    }
    return;
}

int main(void)
{
    std::cout <<"~~~~~~~~~They re coming~~~~~~~~~"<<'\n';
    int arr_l = 2;
    Zombie *z = zombieHorde(arr_l, "WWalker");
    if (!z)
        return (1);
    test_horder(z, arr_l);
    delete[] z;
    std::cout <<"~~~~~~~~~They re all die~~~~~~~~~"<<'\n';
    return (0);
}
