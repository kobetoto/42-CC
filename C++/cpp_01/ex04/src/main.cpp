/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:01:41 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/09 16:20:26 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <string.h>

void ft_error(std::string msg){
    std::cerr << msg << '\n';
    exit(0);
}

std::string charS_to_string(char *s){
    int size = strlen(s);
    std::string str(s, size);
    return (str);
}

void check_arg(char **av){
    std::string arg1 = charS_to_string(av[1]);
    std::string arg2 = charS_to_string(av[2]);
    std::string arg3 = charS_to_string(av[3]);
    if (arg1.empty() || arg2.empty() || arg3.empty())
        ft_error("==Error: enter three no empty parameters==");
}



int main(int ac, char **av){
    if (ac != 4){
        ft_error("==Error: enter three parameters in the following order: a filename and two strings==");
        return (0);
    }
    check_arg(av);

    std::ifstream   ifs(av[1]);
    if (!ifs.is_open())
            ft_error("==Error: cannot open input file==");
    std::string fileName = charS_to_string(av[1]);
    std::string line;
    std::string allLines;
    while(std::getline(ifs, line)){
        if(ifs.eof())
            break;
    std::cout << "===" << line << "===" << '\n';
    allLines += line;
    allLines += '\n';
    }
    std::cout << "+++" << allLines << "+++" << '\n';
    
    
    std::ofstream   ofs(fileName + ".replace");
    ofs << allLines;
    ifs.close();
    // ofs.close();
    return (0);
}
