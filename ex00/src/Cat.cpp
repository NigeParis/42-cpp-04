/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:38:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 11:52:02 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat") {

    std::cout << YELLOW;
    std::cout << "Cat: Default constructor" << std::endl;
    std::cout << RESET;
};


// copy constructor
Cat::Cat(const Cat &cat) {

    std::cout << YELLOW;
    std::cout << "Cat: copy constructor" << std::endl;
    std::cout << RESET;

    this->type_ = cat.type_;
};

// Copy assignement operator

Cat &Cat::operator=(const Cat &cat) {
    
    std::cout << YELLOW;
    std::cout << "Cat: copy assignement operator" << std::endl;
    std::cout << RESET;
    if (this != &cat) {
        this->type_ = cat.type_;
    }
    return (*this);
};

// Destructor
Cat::~Cat(void) {
    
    std::cout << YELLOW;    
    std::cout << "Cat: Destructor" << std::endl;
    std::cout << RESET;
};


 void Cat::makeSound(void) const{

    std::cout << YELLOW;    
    std::cout << "Miaw Miaw"<< std::endl;
    std::cout << RESET;
};
