/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:46:17 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/22 14:34:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria { 

    public :
        
        Cure(void);
        Cure(Cure &cure);
        Cure &operator=(Cure &cure);
        ~Cure(void);
        Cure clone(void);

    
};
#endif