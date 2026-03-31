/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:30:00 by elmondo           #+#    #+#             */
/*   Updated: 2026/03/31 18:41:56 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string toUpper(std::string entry)
{
	int i = -1;

	while (entry[++i])
		entry[i] = std::toupper(entry[i]);
	return entry;
}

int main(void)
{
	std::string entry;
	Harl harl;

	std::cout << "Welcome to Harl's Karen phase. "
				 "Please insert the kind of complain you'd like to make."
			  << std::endl;
	std::cin >> entry;
	harl.complain(toUpper(entry));
	return 0;
}
