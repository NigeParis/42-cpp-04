/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:38:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/18 17:24:35 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat"), brain_(new Brain()) {

    std::cout << YELLOW;
    std::cout << "Cat: Default constructor" << std::endl;
    std::cout << RESET;
    
};

// copy constructor
Cat::Cat(Cat &cat) : brain_(new Brain()) {

    std::cout << YELLOW;
    std::cout << "Cat: copy constructor" << std::endl;
    std::cout << RESET;

    this->type_ = cat.type_;
};

// Copy assignement operator

Cat &Cat::operator=(Cat &cat) {
    
    std::cout << YELLOW;
    std::cout << "Cat: copy assignement operator" << std::endl;
    std::cout << RESET;
    if (this != &cat) {
        this->type_ = cat.type_;
        this->brain_ = new Brain(*cat.brain_);
    }
    return (*this);
};

// Destructor
Cat::~Cat(void) {
    
    std::cout << YELLOW;    
    std::cout << "Cat: Delete Cat Brain Destructor" << std::endl;
    std::cout << "Cat: Destructor" << std::endl;
    std::cout << RESET;
    delete (this->brain_);
};


void Cat::makeSound(void) const{

    std::cout << YELLOW;    
    std::cout << "Miaw Miaw"<< std::endl;
    std::cout << RESET;
};



std::string Cat::get_idea(int i) {

    std::cout << YELLOW;    
    std::cout << "Cat::get_idea: ";
    return (this->brain_->get_idea(i));
};