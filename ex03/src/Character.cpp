/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:01 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/26 10:51:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(void): name_("default") {

    //std::cout << "Character: default constructor" << std::endl;
    for (int i = 0; i < BINSIZE; i++)
        this->bin_[i] = NULL;
    for (int i = 0; i < BAGSIZE; i++)
        this->power_[i] = NULL;
    
};


Character::Character(std::string name): name_(name) {

    //std::cout << "Character: named constructor" << std::endl;
    for (int i = 0; i < BINSIZE; i++)
        this->bin_[i] = NULL;
    for (int i = 0; i < BAGSIZE; i++)
        this->power_[i] = NULL;
};


Character::Character(Character &character) {

    //std::cout << "Character: copy constructor" << std::endl;
    *this = character;          
};

Character &Character::operator=(Character &character) {

    //std::cout << "Character: operator assignement" << std::endl;
    if (this != &character) { 
        this->name_ = character.name_;
        for (int i = 0; i < BAGSIZE; i++) {
            if (this->power_[i] == NULL) {
                this->power_[i] = character.power_[i]->clone();
            } else {
                delete (this->power_[i]);
                this->power_[i] = character.power_[i]->clone();
            }
        }
    }
    return (*this);
};




Character::~Character(void) {

    //std::cout << "Character: default destructor" << std::endl;

    for (int i = 0; i < BINSIZE; i++) {
        if (this->bin_[i] != NULL)
            delete (this->bin_[i]);
    }
    for (int i = 0; i < BAGSIZE; i++) {
        if (this->power_[i] != NULL)
            delete (this->power_[i]);
    }
};



void Character::equip(AMateria *power) {

    //std::cout << "Character: equip function" << std::endl;
    if (power == NULL)
        return ;
    for (int i = 0; i < BAGSIZE; i++) {
        
        if (this->power_[i] == NULL) {
                
            this->power_[i] = power;
            //std::cout << "Character Added power: " << power->getType() << " index : " << i << std::endl;
            return ;
        }
    }
    
    std::cout << "Character: " << this->getName() <<": equipements sac is full !" << std::endl;
    delete (power);
    
};


std::string const &Character::getName(void) const {

    //std::cout << "Character: getName called :";
    return (this->name_);
};


 void Character::unequip(int idx) {

    if (idx < 0 || idx >= BAGSIZE) {
        std::cout << "Character: " << this->getName() << " Error: Scope index wrong" << std::endl;
        return ;
    }    
    if (this->power_[idx] == NULL) {
        std::cout << "Character: " << this->getName() << " unequip - nothing to do, power not found" << std::endl;  
    } else if (this->bin_[BINSIZE - 1] != NULL) {
        std::cout << "Character: " << this->getName() << " unequip - nothing to do, bin full" << std::endl;  
    } else {

        for (int i = 0; i < BINSIZE; i++) {
            if (this->bin_[i] == NULL) {
                this->bin_[i] = this->power_[i];
                break ;   
            }
        }
        std::cout << "Character: " << this->name_ << " puts power " << power_[idx]->getType() << " in the bin !" << std::endl;       
        this->power_[idx] = NULL;
    }
 };

void Character::use(int idx, ICharacter& target) {

    if (idx < 0 || idx >= BAGSIZE) {
        std::cout << "Character: Error index: bag capacity wrong" << std::endl;
        return ;
    }
    if (this->power_[idx] == NULL) {
        std::cout << "Character: " << this->getName() << " trys to use a power that's not in his bag";
        std::cout << ", the target name was: " << target.getName()  << std::endl;       
        return ; 
    };
    this->power_[idx]->use(target);
};