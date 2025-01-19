/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:31:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 16:45:13 by nige42           ###   ########.fr       */
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
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        ~Cat(void);
        void makeSound(void) const;
        virtual std::string get_idea(const int i) const;
        virtual void new_idea(const int i, const std::string idea) const;

    private:
        Brain *brain_;


    
};
#endif