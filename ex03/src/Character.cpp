/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:01 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 12:40:54 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(void): name_("default") {

    std::cout << "Character: default constructor" << std::endl;
    for (int i = 0; i < 400; i++)
        this->bin_[i] = NULL;
    for (int i = 0; i < 4; i++)
        this->power_[i] = NULL;
    
};


Character::Character(std::string name): name_(name) {

    std::cout << "Character: named constructor" << std::endl;
    for (int i = 0; i < 400; i++)
        this->bin_[i] = NULL;
    for (int i = 0; i < 4; i++)
        this->power_[i] = NULL;
};


Character::Character(Character &character) {

    std::cout << "Character: copy constructor" << std::endl;
    *this = character;          
};

Character &Character::operator=(Character &character) {

    std::cout << "Character: operator assignement" << std::endl;
    if (this != &character) { 
           
        this->name_ = character.name_;
        for (int i = 0; i < 400; i++)
            this->bin_[i] = character.bin_[i];
        for (int i = 0; i < 4; i++)
            this->power_[i] = character.power_[i];
    }
    return (*this);
};




Character::~Character(void) {

    std::cout << "Character: default destructor" << std::endl;
    
};



void Character::equip(AMateria *power) {

    std::cout << "Character: equip function" << std::endl;
    this->power_[0] = power;
    
    std::cout << "Character: Debug: " << this->power_[0] << std::endl;
};


std::string const &Character::getName(void) const {

    std::cout << "Character: equip function" << std::endl;
    return (this->name_);
};


 void Character::unequip(int idx) {
    
    (void) idx;

 };

void Character::use(int idx, ICharacter& target) {

    (void) idx;
    (void) target;
    
    
};