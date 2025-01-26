/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:03:09 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/26 11:03:34 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : virtual public ICharacter {

    public:
    
        Character(void);
        Character(std::string name);
        Character(Character &character);
        Character &operator=(Character &character);
        ~Character(void);
        
        std::string const & getName(void) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target); // ice.attaque()
    
    private:
        
        std::string name_;
        AMateria *power_[BAGSIZE];
        AMateria *bin_[BINSIZE];

};

#endif
