/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:38:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/15 16:17:27 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {

    std::cout << LIGHTBLUE;
    std::cout << "WrongCat: Default constructor" << std::endl;
    std::cout << RESET;
};

// copy constructor
WrongCat::WrongCat(WrongCat &wrongcat) {

    std::cout << LIGHTBLUE;
    std::cout << "WrongCat: copy constructor" << std::endl;
    std::cout << RESET;

    this->type_ = wrongcat.type_;
};

// Copy assignement operator

WrongCat &WrongCat::operator=(WrongCat &wrongcat) {
    
    std::cout << LIGHTBLUE;
    std::cout << "WrongCat: copy assignement operator" << std::endl;
    std::cout << RESET;
    if (this != &wrongcat) {
        this->type_ = wrongcat.type_;
    }
    return (*this);
};

// Destructor
WrongCat::~WrongCat(void) {
    
    std::cout << LIGHTBLUE;    
    std::cout << "WrongCat: Destructor" << std::endl;
    std::cout << RESET;
};

void WrongCat::makeSound(void) const{

    std::cout << LIGHTBLUE;    
    std::cout << "Miaw Miaw"<< std::endl;
    std::cout << RESET;
};
