/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:10:04 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/24 13:43:24 by nige42           ###   ########.fr       */
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
        
        std::string type_;

    public:
 
        AMateria(std::string const & type);
        AMateria(void);
        AMateria(AMateria const &amateria);
        
        AMateria &operator=(AMateria const &amateria);
        
        virtual ~AMateria(void);

 
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

int whichPower(const std::string& type);

#endif
