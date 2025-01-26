/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:10:04 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/26 10:57:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#define BAGSIZE 4
#define BINSIZE 400

class ICharacter;

class AMateria {

    public:
 
        AMateria(std::string const & type);
        AMateria(void);
        AMateria(AMateria const &amateria);
        
        AMateria &operator=(AMateria const &amateria);
        
        virtual ~AMateria(void);

 
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    
    protected:
        
        std::string type_;

};

int whichPower(const std::string& type);

#endif
