/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/25 12:10:38 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"

int main()
{
    {
        std::cout << "/ ------------------------ test 1 >> mandatory ----------------------- /" << std::endl;
        
        IMateriaSource* src = new MateriaSource(); 
        src->learnMateria(new Ice()); 
        src->learnMateria(new Cure());
        
        ICharacter* me = new Character("me");
        
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        
        ICharacter* bob = new Character("bob"); 
        
        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob; 
        delete me; 
        delete src;
        std::cout << "/ ---------------------- test 1 >> mandatory END --------------------- /" << std::endl;
    }
    
    std::cout << "/ ------------------ test 2 >> learn 4 materia and use --------------- /" << std::endl;
    
    IMateriaSource* src = new MateriaSource(); 
    src->learnMateria(new Ice()); 
    src->learnMateria(new Ice()); 
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    ICharacter* bob = new Character("bob"); 
    
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    std::cout << "/ --------------------- test 2 >> delete 4 materia ------------------- /" << std::endl;
    
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);


    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    
    delete bob; 
    delete me; 
    delete src;
    
    return 0;
}
