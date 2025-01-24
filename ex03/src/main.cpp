/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/24 14:23:15 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp = NULL;
    
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    tmp = src->createMateria("cure");
    // me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    
    // bob->equip(tmp);
    std::cout << bob->getName() << std::endl;
    bob->equip(tmp);
    bob->unequip(0);
    
    me->use(3, *bob);
    
    delete bob;
    delete me;
    // delete src;
    return 0;
}
