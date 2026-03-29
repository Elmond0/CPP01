/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:38:59 by elmondo           #+#    #+#             */
/*   Updated: 2026/03/29 15:08:09 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool isDigitOnly(std::string str)
{
	for (std::string::iterator it = str.begin(); it < str.end(); ++it)
	{
		if (!std::isdigit(*it))
			return (false);
	}
	return (true);
}

int main(void)
{

	Zombie *horde;
	std::string input;
	int N;

	while (1)
	{
		std::cout << "How many zombies would you like, sir?" << std::endl;
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			std::cout << "Leaving.." << std::endl;
			return 0;
		}
		if (isDigitOnly(input))
			break;
		else
			std::cout << "Please, insert valid number." << std::endl;
	}
	std::stringstream ss(input);
	ss >> N;
	while (1)
	{
		std::cout << "Type a name for your zombies" << std::endl;
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			std::cout << "Leaving.." << std::endl;
			return 0;
		}
		if (!input.empty())
			break;
	}
	horde = zombieHorde(N, input);
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}

	delete[] horde;

	return 0;
}
