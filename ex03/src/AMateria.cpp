/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:12:48 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/21 16:28:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"


AMateria::AMateria(void): type_("default") {

    std::cout << "AMateria: default constructor" << std::endl;
    
};


AMateria::AMateria(AMateria const &amateria) {

    std::cout << "AMateria: copy constructor" << std::endl;
    this->type_ = amateria.type_;
    
};





AMateria &AMateria::operator=(AMateria const &amateria) {

    std::cout << "AMateria: copy assignement" << std::endl;

    if (this != &amateria) {
        
        this->type_ = amateria.type_;
    }

    return (*this);
};



AMateria::~AMateria(void) {

    std::cout << "AMateria: default destructor" << std::endl;
    
};