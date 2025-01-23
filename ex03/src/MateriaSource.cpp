/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:45:22 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 15:47:54 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    
        std::cout << "MateriaSource: default constructor" << std::endl;
        for (int i = 0; i < 4; i++)
            this->amateria_[i] = NULL;    
};

MateriaSource::MateriaSource(MateriaSource &materiasource) {
    
        std::cout << "MateriaSource: copy constructor" << std::endl;
        *this = materiasource;
          
};

MateriaSource &MateriaSource::operator=(MateriaSource &materiasource) {

    std::cout << "MateriaSource: operator assignement" << std::endl;    
    if (this != &materiasource) {
         
         for (int i = 0; i < 4; i++)
            this->amateria_[i] = materiasource.amateria_[i];   
    }
    return (*this);
};


MateriaSource::~MateriaSource(void) {
    
    std::cout << "MateriaSource: default desstructor" << std::endl;    
};


void MateriaSource::learnMateria(AMateria* power) {

    std::cout << "MateriaSource: learnMateria called" << std::endl;    

    this->amateria_[0] = power;   

    std::cout << "learnMateria: " << this->amateria_[0] << std::endl;    
};

AMateria* MateriaSource::createMateria(std::string const & type) {

    (void)type;
    

    return (0);
};
