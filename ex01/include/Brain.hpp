/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:03:43 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/16 16:43:59 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"


class Brain {

    public:

        Brain(void);
        Brain(Brain &brain);
        Brain &operator=(Brain &brain);
        virtual ~Brain(void);

        virtual std::string getIdea(int i);
        

    protected:

        std::string ideas_[100];

};
#endif