/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:46:17 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 16:54:03 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: virtual public AMateria { 

    public :
        
        Ice(void);
        Ice(const Ice &ice);
        Ice &operator=(const Ice &ice);
        ~Ice(void);
        
        AMateria *clone(void) const;
    
};
#endif