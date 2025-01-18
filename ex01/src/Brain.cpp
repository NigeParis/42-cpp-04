/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:20:34 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/18 11:36:17 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Brain.hpp"

// default constructor
Brain::Brain(void) {
    
    std::cout << "Brain: Default constructor" << std::endl;
    for(int i = 0; i < 100; i++) {
        this->ideas_[i] = "My Idea_";
    }
};

// copy constructor
Brain::Brain(Brain &brain) { 

    std::cout << "Brain: copy constructor" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas_[i] = brain.ideas_[i];
};

// copy operator assignement
Brain &Brain::operator=(Brain &brain) {

    std::cout << "Brain: copy operator assignement" << std::endl;
    if (this != &brain){
        
        for(int i = 0; i < 100; i++)
            this->ideas_[i] = brain.ideas_[i];
        
    }
    return (*this);  
};

// destructor
Brain::~Brain(void) {
    
    std::cout << "Brain: Destructor" << std::endl;
};


std::string Brain::get_idea(int i) {

    if (i < 0 || i > 99)    
        return ("Error: No idea !");
    return(this->ideas_[i]);
};
