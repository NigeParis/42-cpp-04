/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/16 16:38:44 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/WrongAnimal.hpp"
#include "./include/WrongCat.hpp"
#include "./include/Animal.hpp"
#include "./include/Cat.hpp"
#include "./include/Dog.hpp"
#include "./include/Brain.hpp"


int main( void ) {

    Animal *cat = new Cat();
    Cat *test = new Cat();
    std::cout << "Cat :" << cat->getType() << std::endl;
    
    for(int i = 0; i < 100; i++)
        std::cout << test->getBrain(i) << std::endl;    

    delete cat;
    delete test;
    return (0);
}
