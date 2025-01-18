/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:14:39 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/18 16:33:58 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Animal.hpp"

// default constructor
Animal::Animal(void) : type_("unknown") {
    
    std::cout << RED;
    std::cout << "Animal: unknown default constructor" << std::endl;
    std::cout << RESET;
};

// named constructor
Animal::Animal(std::string name) : type_(name) {
    
    std::cout << RED;
    std::cout << "Animal: named constructor" << std::endl;   
    std::cout << RESET;
};

// copy constructor
Animal::Animal(Animal &animal) {
    
    std::cout << RED;
    std::cout << "Animal: copy constructor" << std::endl;
    std::cout << RESET;
    this->type_ = animal.type_;
};

// operator copy assignement
Animal &Animal::operator=(Animal &animal) {
    
    std::cout << RED;
    std::cout << "Animal: operator copy assignement" << std::endl;
    std::cout << RESET;
    if (this != &animal)
        this->type_ = animal.type_;
    return (*this);
};

// destructor
Animal::~Animal(void) {

    std::cout << RED;
    std::cout << "Animal: Destructor" << std::endl;    \
    std::cout << RESET;
};

// get variables
std::string Animal::getType(void) const {

    std::cout << RED;
    std::cout << "get Type of Animal: ";
    std::cout << RESET;
    return (this->type_);
};



 void Animal::makeSound(void) const{

    std::cout << YELLOW;    
    std::cout << "No sound is heard"<< std::endl;
    std::cout << RESET;
};



