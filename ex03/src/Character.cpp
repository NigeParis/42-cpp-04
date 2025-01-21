/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:01 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/21 16:18:46 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"


Character::Character(void) {

    std::cout << "Character: default constructor" << std::endl;
    
};

Character::Character(Character &character) {

    (void)character;
    std::cout << "Character: copy constructor" << std::endl;
          
};





Character::~Character(void) {

    std::cout << "Character: default destructor" << std::endl;
    
};



void Character::equip(AMateria* m) {

    (void)m;
    std::cout << "Character: equip function" << std::endl;
    
};
