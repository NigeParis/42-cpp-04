/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:20:34 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/17 13:16:09 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Brain.hpp"


std::string intToString(int nbr) {

    std::string string;
    
    if (nbr < 0)
        return ("Error");
    if (nbr > 2147483647)
        return ("Error");
    if (nbr == 0)
        string.push_back(0 + '0');
   
    while (nbr > 0) {

        string.push_back(nbr%10 + '0');
        nbr /= 10;
        
    } 
    
        while (string.) {
        string.rbegin()

        }   
    return (string);   
}




// default constructor
Brain::Brain(void) {
    
    std::cout << "Brain: Default constructor" << std::endl;
    for(int i = 0; i < 100; i++) {
        std::string nbr = intToString(2147483647);
        this->ideas_[i] = "My Idea_" + nbr;
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


std::string Brain::getIdea(int i) {

    if (i < 0 || i > 99)    
        return ("Error: No idea !");
    return(this->ideas_[i]);
};
