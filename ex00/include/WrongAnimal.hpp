/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:09:26 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 11:55:11 by nige42           ###   ########.fr       */
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
        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal(const std::string name);
        WrongAnimal &operator=(const WrongAnimal &wronganimal);
        virtual ~WrongAnimal(void);


        //get WrongAnimal type
        std::string getType(void) const;
        void makeSound(void) const;

    protected:

        std::string type_;    
};

#endif