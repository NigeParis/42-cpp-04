/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:14:39 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 15:21:24 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/WrongAnimal.hpp"

// default constructor
WrongAnimal::WrongAnimal(void) : type_("unknown") {
    
    std::cout << PINK;
    std::cout << "WrongAnimal: unknown default constructor" << std::endl;
    std::cout << RESET;
};

// named constructor
WrongAnimal::WrongAnimal(const std::string name) : type_(name) {
    
    std::cout << PINK;
    std::cout << "WrongAnimal: named constructor" << std::endl;   
    std::cout << RESET;
};

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) {
    
    std::cout << PINK;
    std::cout << "WrongAnimal: copy constructor" << std::endl;
    this->type_ = wronganimal.type_;
    std::cout << RESET;
};

// operator copy assignement
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal) {
    
    std::cout << PINK;
    std::cout << "WrongAnimal: operator copy assignement" << std::endl;
    if (this != &wronganimal)
        this->type_ = wronganimal.type_;
    std::cout << RESET;
    return (*this);
};

// destructor
WrongAnimal::~WrongAnimal(void) {

    std::cout << PINK;
    std::cout << "WrongAnimal: Destructor" << std::endl;    \
    std::cout << RESET;
};

// get variables
std::string WrongAnimal::getType(void) const {

    return (this->type_);
};

// make sound
 void WrongAnimal::makeSound(void) const{

    std::cout << PINK;    
    std::cout << "A WrongAnimal is heard"<< std::endl;
    std::cout << RESET;
};
