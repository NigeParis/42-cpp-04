/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:16:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/16 13:40:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {

    public:
            Dog(void);
            Dog(Dog &dog);
            Dog &operator=(Dog &dog);
            virtual ~Dog(void);
            void makeSound(void) const;
            

    private:

};
#endif