/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:10:04 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/21 15:56:36 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        
        std::string type;

    public:
 
        AMateria(void);
        AMateria(AMateria const &amateria);
        
        AMateria &operator=(AMateria const &amateria);
        
        virtual ~AMateria(void);

 
        AMateria(std::string const & type);
        //[...]
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};




#endif
