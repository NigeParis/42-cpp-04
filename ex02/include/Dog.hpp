/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:16:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 15:03:10 by nige42           ###   ########.fr       */
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
            Dog(const Dog &dog);
            Dog &operator=(const Dog &dog);
            ~Dog(void);
            void makeSound(void) const;
            virtual std::string get_idea(const int i) const;
            virtual void new_idea(const int i, const std::string idea) const;

    private:
          Brain *brain_;
};
#endif
