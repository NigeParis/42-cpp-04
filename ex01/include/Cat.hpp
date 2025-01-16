/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:31:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/16 11:56:38 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {

    public:
        Cat(void);
        Cat(Cat &cat);
        
        Cat &operator=(Cat &cat);
        
        virtual ~Cat(void);

        void makeSound(void) const;
        virtual std::string getBrain(int i);



    private:

        Brain *brain_;
    
};
#endif