/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:39:06 by elmondo           #+#    #+#             */
/*   Updated: 2026/03/29 14:51:39 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	~Zombie(void);
	void announce(void) const;
	void setName(std::string name);

};

Zombie *zombieHorde(int N, std::string name);

#endif
