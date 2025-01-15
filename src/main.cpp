/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/14 12:15:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Animal.hpp"
#include "./include/Cat.hpp"


int main( void ) {

    Cat animal;
    Cat imal(animal);

    
    std::cout << "Animal: type= " << imal.getAnimalType() << std::endl;

    imal.makesound();



    return (0);
}
