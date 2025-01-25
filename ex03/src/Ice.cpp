/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:24:59 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/25 11:11:36 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) {
    
    //std::cout << "Ice: default destructor" << std::endl;
    this->type_ = "ice";
};

Ice::Ice(const Ice &Ice) {
    
    //std::cout << "ice: copy constructor" << std::endl;
    *this = Ice;
};

Ice &Ice::operator=(const Ice &ice) {
    
    //std::cout << "Ice: operator assignement" << std::endl;
    if (this != &ice) {
        
        this->type_ = ice.type_;
    }
    return(*this); 
};
        
Ice::~Ice(void) {
    
    //std::cout << "Ice: default destructor" << std::endl;
};


AMateria *Ice::clone(void) const{

    //std::cout << "Ice: clone called" << std::endl;
    Ice *Address;
    Address = new Ice(*this);  
    return (Address);  
};

