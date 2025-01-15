/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:09:26 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/15 13:27:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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

class WrongAnimal {

    public:

        WrongAnimal(void);
        WrongAnimal(WrongAnimal &animal);
        WrongAnimal(std::string name);
        WrongAnimal &operator=(WrongAnimal &wronganimal);
        virtual ~WrongAnimal(void);


        //get WrongAnimal type
        std::string getType(void) const;
        void makeSound(void) const;

    protected:

        std::string type_;    
};

#endif