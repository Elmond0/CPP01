/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 17:34:47 by elmondo           #+#    #+#             */
/*   Updated: 2026/03/29 17:35:58 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << _name << " built." << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << _name << " destroyed." << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	return ;
}

void HumanB::attack(void) const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon" << std::endl;
	return ;
}
