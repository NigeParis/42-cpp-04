/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:14:39 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/14 12:06:07 by nrobinso         ###   ########.fr       */
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
    
    std::cout << "Animal: copy constructor" << std::endl;
    this->type_ = animal.type_;
};

// operator copy assignement
Animal &Animal::operator=(Animal &animal) {
    
    std::cout << "Animal: operator copy assignement" << std::endl;
    if (this != &animal)
        this->type_ = animal.type_;
    return (*this);
};

// destructor
Animal::~Animal(void) {

    std::cout << BLUE;
    std::cout << "Animal: Destructor" << std::endl;    \
    std::cout << RESET;
};

//get variables
std::string Animal::getAnimalType(void) {

    return (this->type_);
};

