/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:30:00 by elmondo           #+#    #+#             */
/*   Updated: 2026/03/31 18:42:00 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is born." << std::endl;
	table[0].string = "DEBUG";
	table[0].fn = &Harl::debug;
	table[1].string = "INFO";
	table[1].fn = &Harl::info;
	table[2].string = "WARNING";
	table[2].fn = &Harl::warning;
	table[3].string = "ERROR";
	table[3].fn = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "Harl is dead." << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (level == this->table[i].string)
		{
			(this->*table[i].fn)();
			return;
		}
	}
	std::cout << "Insert valid argument." << std::endl;
}
