/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:45:22 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 13:01:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    
        std::cout << "MateriaSource: default constructor" << std::endl;    
};

MateriaSource::MateriaSource(MateriaSource &materiasource) {
    
        std::cout << "MateriaSource: copy constructor" << std::endl;
        *this = materiasource;
          
};


MateriaSource &MateriaSource::operator=(MateriaSource &materiasource) {

    std::cout << "MateriaSource: operator assignement" << std::endl;    
    if (this != &materiasource) {
        
        
        
    }
    return (*this);
};







MateriaSource::~MateriaSource(void) {
    
        std::cout << "MateriaSource: default desstructor" << std::endl;    
};
