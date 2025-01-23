/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:24:59 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 16:54:13 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) {
    
    std::cout << "Ice: default destructor" << std::endl;
    this->type_ = "ice";
};

Ice::Ice(const Ice &Ice) {
    
    std::cout << "ice: copy constructor" << std::endl;
    *this = Ice;
};

Ice &Ice::operator=(const Ice &Ice) {
    
    std::cout << "Ice: operator assignement" << std::endl;
    if (this != &Ice) {
        
        this->type_ = Ice.type_;
    }
    return(*this); 
};
        
Ice::~Ice(void) {
    std::cout << "Ice: default destructor" << std::endl;
};


AMateria *Ice::clone(void) const{

    std::cout << "Ice: clone called" << std::endl;
    Ice *Address;
    Address = new Ice(*this);  
    return (Address);  
};

