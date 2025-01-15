/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:09:26 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/15 13:05:11 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define RED "\033[31m"
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define GREY "\033[30m"
#define YELLOW "\033[33m"
#define LIGHTBLUE "\033[36m"
#define PINK "\033[35m"
#define RESET "\033[0m"

class Animal {

    public:

        Animal(void);
        Animal(Animal &animal);
        Animal(std::string name);
        Animal &operator=(Animal &animal);
        virtual ~Animal(void);


        //get Animal type
        std::string getType(void) const;
        virtual void makeSound(void) const;

    protected:

        std::string type_;    
};

#endif