/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:46:17 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 12:28:40 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: virtual public AMateria { 

    public :
        
        Ice(void);
        Ice(Ice &ice);
        Ice &operator=(Ice &ice);
        ~Ice(void);
        
        AMateria *clone(void);
    
};
#endif