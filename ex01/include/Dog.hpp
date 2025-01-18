/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:16:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/18 17:34:12 by nige42           ###   ########.fr       */
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
            ~Dog(void);
            void makeSound(void) const;
            virtual std::string get_idea(int i);
            virtual void new_idea(int i, std::string idea);


    private:
          Brain *brain_;


};
#endif