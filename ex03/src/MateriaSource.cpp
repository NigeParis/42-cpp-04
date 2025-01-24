/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:45:22 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/24 17:11:57 by nige42           ###   ########.fr       */
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

    std::cout << "MateriaSource: learnMateria() called" << std::endl;    

    for (int i = 0; i < BAGSIZE; i++) {
        if (this->amateria_[i] == NULL) {

            this->amateria_[i] = power;
            std::cout << "MateriaSource: Learned " << power->getType() << "Index : " << i << std::endl;
            return ;
        }
    }
    delete (power);
    std::cout << "MAteriaSource: No space in the bag !" << std::endl;        
};

AMateria* MateriaSource::createMateria(std::string const & type) {

    for (int i = 0; i < BAGSIZE; i++) {
        if (this->amateria_[i] != NULL) {
    
            if (this->amateria_[i]->getType() == type) {

                std::cout << "MateriaSource: created " << type << "Index : " << i << std::endl;
                return (this->amateria_[i]->clone());
            }
        }
        std::cout << "MAteriaSource: Type unknown !" << std::endl;        
    }
    return (0);
};
