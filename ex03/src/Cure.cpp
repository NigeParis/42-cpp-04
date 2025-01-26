/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:24:59 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/26 11:02:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void) {
    
    //std::cout << "Cure: default destructor" << std::endl;
    this->type_ = "cure";
};

Cure::Cure(const Cure &cure) {
    
   // std::cout << "Cure: copy constructor" << std::endl;
    *this = cure;
};

Cure &Cure::operator=(const Cure &cure) {
    
   // std::cout << "Cure: operator assignement" << std::endl;
    if (this != &cure) {
        
        this->type_ = cure.type_;
    }
    return(*this); 
};
        
Cure::~Cure(void) {

    //std::cout << "Cure: default destructor" << std::endl;
};

AMateria *Cure::clone(void) const{

    //std::cout << "Cure: clone called" << std::endl;
    Cure *Address;
    Address = new Cure(*this);  
    return (Address);  
};
