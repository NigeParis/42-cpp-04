/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:38:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/14 12:13:38 by nrobinso         ###   ########.fr       */
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
Cat::Cat(Cat &cat) {

    std::cout << YELLOW;
    std::cout << "Cat: copy constructor" << std::endl;
    std::cout << RESET;

    this->type_ = cat.type_;
};





// Destructor
Cat::~Cat(void) {
    
    std::cout << YELLOW;    
    std::cout << "Cat: Destructor" << std::endl;
    std::cout << RESET;
};



//Cat Sound Function
void Cat::makesound(void) {

    std::cout << YELLOW;    
    std::cout << "Cat: speaks out \"Miaw Miaw\" " << std::endl;
    std::cout << RESET;
};