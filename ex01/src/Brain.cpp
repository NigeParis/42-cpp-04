/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:20:34 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 14:34:54 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Brain.hpp"

// default constructor
Brain::Brain(void) {
    
    std::cout << PINK;
    std::cout << "Brain: Default constructor" << std::endl;
    std::cout << RESET;
    for(int i = 0; i < 100; i++) {
        this->ideas_[i] = "Your Idea_";
    }
};

// copy constructor
Brain::Brain(const Brain &brain) { 

    std::cout << PINK;
    std::cout << "Brain: copy constructor" << std::endl;
    std::cout << RESET;
    for(int i = 0; i < 100; i++)
        this->ideas_[i] = brain.ideas_[i];
};

// copy operator assignement
Brain &Brain::operator=(const Brain &brain) {

    std::cout << PINK;
    std::cout << "Brain: copy operator assignement" << std::endl;
    std::cout << RESET;
    if (this != &brain){
        
        for(int i = 0; i < 100; i++)
            this->ideas_[i] = brain.ideas_[i]; 
    }
    return (*this);  
};

// destructor
Brain::~Brain(void) {
    std::cout << PINK;
    std::cout << "Brain: Destructor" << std::endl;
    std::cout << RESET;
};


std::string Brain::get_idea(const int i) {

    if (i < 0 || i > 99)    
        return ("Error: No idea !");
    return(this->ideas_[i]);
};

void Brain::new_idea(const int i, const std::string idea) {

    std::cout << GREEN;    
    std::cout << "Brain::new_idea: ";
    this->ideas_[i] = idea;
    
};