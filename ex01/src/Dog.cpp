/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:16:40 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 15:02:59 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Dog.hpp"

// default constructor
Dog::Dog(void) : Animal("Dog") , brain_(new Brain()) {
    
    std::cout << GREEN;
    std::cout << "Dog: Default constructor" << std::endl;
    std::cout << RESET;
    
};

// copy constructor
Dog::Dog(const Dog &dog) : brain_(new Brain()) {

    std::cout << GREEN;    
    std::cout << "Dog: copy constructor" << std::endl;
    std::cout << RESET;
    this->type_ = dog.type_;
};

// Copy assignement operator
Dog &Dog::operator=(const Dog &dog) {
    
    std::cout << GREEN;    
    std::cout << "Dog copy assignement operator" << std::endl;
    std::cout << RESET;
    if (this != &dog) {
        this->type_ = dog.type_;
        this->brain_ = new Brain(*dog.brain_);
    }
    return (*this);
};

// destructor
Dog::~Dog(void) {
    
    std::cout << GREEN;    
    std::cout << "Dog: Delete Dog Brain Destructor" << std::endl;
    std::cout << "Dog: Destructor" << std::endl;
    std::cout << RESET;
    delete (this->brain_);
};


void Dog::makeSound(void) const{

    std::cout << GREEN;    
    std::cout << "Wouf Wouf"<< std::endl;
    std::cout << RESET;
};

std::string Dog::get_idea(const int i) const {

    std::cout << GREEN;    
    std::cout << "Dog::get_idea: ";
    return (this->brain_->get_idea(i));
};

void Dog::new_idea(const int i, const std::string idea) const {

    std::cout << GREEN;    
    std::cout << "Dog::new_idea: ";
    this->brain_->new_idea(i, idea);
    
};
