/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/18 17:03:00 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Animal.hpp"
#include "./include/WrongAnimal.hpp"
#include "./include/Cat.hpp"
#include "./include/WrongCat.hpp"
#include "./include/Dog.hpp"


int main( void ) {

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *b = new WrongCat();
    const WrongAnimal *x = new WrongCat();
  
    std::cout << j->getType() << " type in Dog class" << std::endl;
    std::cout << i->getType() << " type in Cat class" << std::endl;
    std::cout << x->getType() << " type in WrongCat class " << std::endl;
    std::cout << b->getType() << " type in WrongCat class " << std::endl;
    std::cout << meta->getType() << " type in Animal class " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "tests ++ =======================" << std::endl;

    x->makeSound();
    b->makeSound();
    
    delete(b);
    b = x;
    std::cout << b->getType() << " type in Dog class " << std::endl;
        
    delete(meta); // without will create leaks because of "new"  
    delete(i);
    delete(j);
    delete(b);

    return (0);
}
