/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:03:43 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/15 17:20:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

    public:

            Brain(void);
            Brain(Brain &brain);
            Brain &operator=(Brain &brain);
            ~Brain(void);



    protected:

        std::string ideas[100];

};
#endif