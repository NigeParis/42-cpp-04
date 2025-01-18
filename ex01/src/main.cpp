/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/18 11:24:11 by nige42           ###   ########.fr       */
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
    std::cout << "Cat :" << cat->getType() << std::endl;
    
   
    delete cat;
    return (0);
}
