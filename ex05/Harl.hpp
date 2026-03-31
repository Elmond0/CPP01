/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:30:00 by elmondo           #+#    #+#             */
/*   Updated: 2026/03/31 18:41:58 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	typedef void (Harl::*Handler)();

	struct Entry
	{
		std::string string;
		Handler fn;
	};

	Entry table[4];

public:
	Harl(void);
	~Harl(void);

	void complain(std::string level);
};

#endif
