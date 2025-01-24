/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:03:09 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/24 14:28:07 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"




class Character : virtual public ICharacter {

    private:
        
        std::string name_;
        AMateria *power_[BAGSIZE];
        AMateria *bin_[BINSIZE];
        

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