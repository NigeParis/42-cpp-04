/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:37:35 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 15:21:28 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"

#include <string>
class AMateria;

class MateriaSource : virtual public IMateriaSource {

    private:
    
        AMateria *amateria_[4];
    
    public:
    
        MateriaSource(void);
        MateriaSource(MateriaSource &materiasource);
        MateriaSource &operator=(MateriaSource &materiasource);
        ~MateriaSource(void);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};


#endif