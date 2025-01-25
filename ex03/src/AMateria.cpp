/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:12:48 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/25 11:34:54 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"


AMateria::AMateria(void): type_("default") {

    //std::cout << "AMateria: default constructor" << std::endl;
};


AMateria::AMateria(AMateria const &power) {

    //std::cout << "AMateria: copy constructor" << std::endl;
    this->type_ = power.type_;
};

AMateria::AMateria(std::string const & type) {

    //std::cout << "AMateria: named type constructor" << std::endl;
    this->type_ = type;    
};

AMateria &AMateria::operator=(AMateria const &power) {

    //std::cout << "AMateria: copy assignement" << std::endl;

    if (this != &power) {
        
        this->type_ = power.type_;
    }

    return (*this);
};

AMateria::~AMateria(void) {

    //std::cout << "AMateria: default destructor" << std::endl;
};

std::string const &AMateria::getType(void) const{

    //std::cout << "AMateria: getType called" << std::endl;
    return(this->type_);
};


void AMateria::use(ICharacter& target) {

    switch (whichPower(this->type_)) {
    
        case 1:
            std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
            break ; 
        case 2:
            std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
            break ;
        case 0:
            std::cout << "Error: Type_ unknown" << std::endl;         
    }
};


// helper to Character::use
int whichPower(const std::string& type) {

    int result = 0;
    
    if (type == "ice")
        return (1);
    else if (type == "cure")
        return (2);
    return (result);
};
