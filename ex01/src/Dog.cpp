/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:16:40 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/15 16:08:51 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Dog.hpp"

// default constructor
Dog::Dog(void) : Animal("Dog") {
    
    std::cout << GREEN;
    std::cout << "Dog: Default constructor" << std::endl;
    std::cout << RESET;
    
};

// copy constructor
Dog::Dog(Dog &dog) {

    std::cout << YELLOW;
    std::cout << "Dog: copy constructor" << std::endl;
    std::cout << RESET;

    this->type_ = dog.type_;
};

// Copy assignement operator
Dog &Dog::operator=(Dog &dog) {
    
    std::cout << YELLOW;
    std::cout << "Dog copy assignement operator" << std::endl;
    std::cout << RESET;
    if (this != &dog) {
        this->type_ = dog.type_;
    }
    return (*this);
};

// destructor
Dog::~Dog(void) {
    
    std::cout << GREEN;    
    std::cout << "Dog: Destructor" << std::endl;
    std::cout << RESET;
};


void Dog::makeSound(void) const{

    std::cout << YELLOW;    
    std::cout << "Wouf Wouf"<< std::endl;
    std::cout << RESET;
};
