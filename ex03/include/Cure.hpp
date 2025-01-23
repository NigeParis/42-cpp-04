/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:46:17 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 15:40:33 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: virtual public AMateria { 

    public :
        
        Cure(void);
        Cure(const Cure &cure);
        Cure &operator=(const Cure &cure);
        ~Cure(void);
        AMateria *clone(void) const;

    
};
#endif