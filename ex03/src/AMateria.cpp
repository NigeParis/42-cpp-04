/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:12:48 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/21 15:43:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"


AMateria::AMateria(void) {

    std::cout << "AMateria: default constructor" << std::endl;
    
};


AMateria::AMateria(AMateria const &amateria) {

    (void)amateria;
    std::cout << "AMateria: copy constructor" << std::endl;
    
    
};





AMateria &AMateria::operator=(AMateria const &amateria) {

    std::cout << "AMateria: copy assignement" << std::endl;

    if (this != &amateria) {

        

        
    }

    return (*this);
};



AMateria::~AMateria(void) {

    std::cout << "AMateria: default destructor" << std::endl;
    
};