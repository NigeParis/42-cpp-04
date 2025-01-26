/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:37:35 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/26 10:58:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include  "Cure.hpp"
#include  "Ice.hpp"

#include <string>

class AMateria;
class Cure;
class Ice;

class MateriaSource : virtual public IMateriaSource {

    public:
    
        MateriaSource(void);
        MateriaSource(MateriaSource &materiasource);
        MateriaSource &operator=(MateriaSource &materiasource);
        ~MateriaSource(void);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

    private:
    
        AMateria *amateria_[4];
};

#endif
