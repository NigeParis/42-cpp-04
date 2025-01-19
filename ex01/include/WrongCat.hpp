/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:31:08 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 12:01:19 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{

    public:
        WrongCat(void);
        WrongCat(const WrongCat &wrongcat);
        WrongCat &operator=(const WrongCat &wrongcat);
        virtual ~WrongCat(void);
        void makeSound(void) const;

    private:
    
};
#endif