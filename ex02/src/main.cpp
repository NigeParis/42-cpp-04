/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/23 16:39:19 by nrobinso         ###   ########.fr       */
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
        std::cout << " --------------test.makeSound Aniamal Class Abstract-----------------" << std::endl;
        
        Dog dog;
        Cat cat;
        // Animal testAbstractClass; // <- will not compile

        cat.makeSound();
        dog.makeSound();
        // testAbstractClass.makeSound();  // <- will not compile

        
        std::cout << dog.getType() << std::endl;
        std::cout << cat.getType() << std::endl;
    }
    

    {
        std::cout << " --------- Simple tests Animal *[species] = new [species]() ---------" << std::endl;
        Animal *dog = new Dog();
        Animal *cat = new Cat();
    
        std::cout << " ---------------------- getType Animal *[species] -------------------" << std::endl;
        std::cout << "cat: " << cat->getType() << std::endl;
        cat->makeSound();
        std::cout << "dog: " << dog->getType() << std::endl;
        dog->makeSound();
   
        
        std::cout << " ------------------- DESTRUCTION Animal *[species] ------------------" << std::endl;
        delete (cat);
        delete (dog);
        std::cout << " ------------------------- END - Simple tests -----------------------" << std::endl;

    }
    
    {
        std::cout << " -------------------------- SOME MORE TESTS -------------------------------" << std::endl;
        Dog *dog = new Dog();
        Dog *dog2 = new Dog(*dog);
        Cat *cat = new Cat();
        WrongAnimal *x = new WrongCat();

        std::cout << " ---------------------- [*species-> make sound] ---------------------" << std::endl;
        dog->makeSound();
        cat->makeSound();
        x->makeSound();
        std::cout << " -------------------------- Dog test = test2 ------------------------" << std::endl;
      
        delete (dog);
        
        std::cout << dog2->get_idea(3) << std::endl;
        
        dog2->makeSound();
        dog2->new_idea(3, "Thinking of Cats");
        
        std::cout << std::endl;
        
        std::cout << dog2->get_idea(3) << std::endl;
        
        std::cout << " -------------------------TEST   dog = dog2; -----------------------" << std::endl;
        dog = dog2;
        
        std::cout << dog->get_idea(3) << std::endl;
        
        delete (dog2);
        delete (cat);
        delete (x);
        std::cout << " ------------------------- END -  Sound tests -----------------------" << std::endl;
    }

    {
        std::cout << " ---- Constructor of  50% objets Cat - 50%  objets Dog in animal ----" << std::endl;
        
        Animal *animals[10];        

        for (int i=0; i < 10; i++) {

            if (i < 5) {
                animals[i] = new Dog();
            }
            else {
                animals[i] = new Cat();
            }
        }
        std::cout << " ------------------------- Sound tests 50 / 50 ----------------------" << std::endl;
        for (int i=0; i < 10; i++) {
            
            animals[i]->makeSound();
        }
        std::cout << " ----------------------- DESTRUCTION *[species] ---------------------" << std::endl;

        for (int i=0; i < 10; i++) {

            delete (animals[i]);
        }

        std::cout << " ---------------------------- DEEP_COPY TEST -------------------------" << std::endl;
        
        const Dog *dog = new Dog();
	    const Dog *dog2 = new Dog(*dog);
	    delete dog;
	    std::cout << "COPY DEEP RESULTS" << std::endl;
	    std::cout << dog2->get_idea(0) << std::endl;
        dog2->new_idea(0, "END OF TESTS");
        std::cout << std::endl;
	    std::cout << dog2->get_idea(0) << std::endl;
	    delete dog2;

    }

        std::cout << " ---------------------------- END ALL TESTS -------------------------" << std::endl;
    

    
    return (0);
}
