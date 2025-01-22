/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:03:09 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/22 12:53:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"


class Character : virtual public ICharacter {

    private:
        
        std::string name_;
        AMateria *power_[4];
        AMateria *bin_[400];
        

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
};

#endif