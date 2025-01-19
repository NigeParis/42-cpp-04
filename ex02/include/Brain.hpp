/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:03:43 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 16:46:14 by nige42           ###   ########.fr       */
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
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        ~Brain(void);

        std::string get_idea(const int i);
        void new_idea(const int i, const std::string idea);


    private:

        std::string ideas_[100];

};
#endif