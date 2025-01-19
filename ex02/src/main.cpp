/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/19 17:01:51 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/WrongAnimal.hpp"
#include "./include/WrongCat.hpp"
#include "./include/Animal.hpp"
#include "./include/Cat.hpp"
#include "./include/Dog.hpp"
#include "./include/Brain.hpp"



int main( void ) {

    {
        std::cout << " --------------test.makeSound AAniamal Class Abstract-----------------" << std::endl;
        
        Dog dog;
        Cat cat;
        //Animal test; // <- will not compile

        cat.makeSound();
        dog.makeSound();
        //test.makeSound();  // <- will not compile

        
        std::cout << dog.getType() << std::endl;
        std::cout << cat.getType() << std::endl;
    }
    
    return (0);
}
