/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:26:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/11/11 16:48:37 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "Harl.hpp"

int main( void ){
    Harl h1;

    std::vector<std::string> levels = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (size_t pos = 0; pos < levels.size(); pos++) {
        std::cout << "+++++++++" << '\n';
        h1.complain(levels[pos]);
    }
    return (0);
}

/**
class MyClass {
public:
    void hello() { std::cout << "Hello\n"; }
};

int main() {
    MyClass obj;
    void (MyClass::*funcPtr)() = &MyClass::hello;  // pointeur vers une fonction membre
    (obj.*funcPtr)();  // appel via pointeur
}

#include <iostream>

class MyClass {
public:
    void hello() {
        std::cout << "Hello from hello()\n";
    }

    void callAnother() {
        // Déclaration d’un pointeur vers une fonction membre
        void (MyClass::*ptr)() = &MyClass::hello;

        // Appel via ce pointeur
        (this->*ptr)(); // <-- syntaxe obligatoire
    }
};

int main() {
    MyClass obj;
    obj.callAnother();
}
🔍 Explication :
void (MyClass::*ptr)()
→ déclare un pointeur vers une fonction membre de MyClass qui ne prend aucun argument et ne retourne rien.

&MyClass::hello
→ affecte au pointeur l’adresse de la fonction membre hello.

(this->*ptr)()
→ appelle la fonction pointée sur l’objet actuel (this).
 */
